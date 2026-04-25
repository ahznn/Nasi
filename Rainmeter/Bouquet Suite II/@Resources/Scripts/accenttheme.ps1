# Apply-PywalAccent.ps1
$ErrorActionPreference = "Stop"

# 1. Define the path to Pywal's colors.json
# Change the path if you use a custom output directory
$walPath = "$env:USERPROFILE\.cache\wal\colors.json"

if (-not (Test-Path $walPath)) {
    Write-Warning "Pywal colors.json not found at $walPath"
    exit
}

# 2. Read the colors
$wal = Get-Content $walPath -Raw | ConvertFrom-Json

# Select the base accent color. Pywal's color4 or color2 usually work best for accents.
$baseHex = $wal.colors.color4 

# Select the inactive accent color.
$inactiveHex = $wal.colors.color8 

Write-Host "Applying Base Accent Color: $baseHex"
Write-Host "Applying Inactive Accent Color: $inactiveHex"

# 3. Helper functions for the luminance progression
function Convert-HexToRgb($hex) {
    $hex = $hex.Replace('#', '')
    return @{
        R = [Convert]::ToByte($hex.Substring(0,2), 16)
        G = [Convert]::ToByte($hex.Substring(2,2), 16)
        B = [Convert]::ToByte($hex.Substring(4,2), 16)
    }
}

function Get-Tint($rgb, $factor) {
    return @{
        R = [math]::Round($rgb.R + (255 - $rgb.R) * $factor)
        G = [math]::Round($rgb.G + (255 - $rgb.G) * $factor)
        B = [math]::Round($rgb.B + (255 - $rgb.B) * $factor)
    }
}

function Get-Shade($rgb, $factor) {
    return @{
        R = [math]::Round($rgb.R * (1 - $factor))
        G = [math]::Round($rgb.G * (1 - $factor))
        B = [math]::Round($rgb.B * (1 - $factor))
    }
}

$baseRgb = Convert-HexToRgb $baseHex
$inactiveRgb = Convert-HexToRgb $inactiveHex

# 4. Generate the 8 color slots for the AccentPalette
# Slot 0-2: High-key progression (Tints)
# Slot 3: Base color
# Slot 4-6: Low-key progression (Shades)
$colors = @(
    (Get-Tint $baseRgb 0.6),  # Lightest
    (Get-Tint $baseRgb 0.4),  # Lighter
    (Get-Tint $baseRgb 0.2),  # Light
    $baseRgb,                 # Base Accent (Slot 3)
    (Get-Shade $baseRgb 0.2), # Dark        (Slot 4)
    (Get-Shade $baseRgb 0.4), # Darker
    (Get-Shade $baseRgb 0.6)  # Darkest
)

# Slot 7: Calculate optimal text foreground based on perceived luminance
$luminance = (0.299 * $baseRgb.R + 0.587 * $baseRgb.G + 0.114 * $baseRgb.B)
if ($luminance -gt 128) {
    $colors += @{ R = 0; G = 0; B = 0 }       # Black text on light accent
} else {
    $colors += @{ R = 255; G = 255; B = 255 } # White text on dark accent
}

# 5. Construct the 32-byte array (R, G, B, 00 format)
[byte[]]$accentPaletteBlob = New-Object byte[] 32
for ($i = 0; $i -lt 8; $i++) {
    $accentPaletteBlob[$i*4]     = [byte]$colors[$i].R
    $accentPaletteBlob[$i*4 + 1] = [byte]$colors[$i].G
    $accentPaletteBlob[$i*4 + 2] = [byte]$colors[$i].B
    $accentPaletteBlob[$i*4 + 3] = 0 # Padding/Alpha byte
}

# 6. Write to Registry
$regPath = "HKCU:\Software\Microsoft\Windows\CurrentVersion\Explorer\Accent"

# Set the AccentPalette Blob
Set-ItemProperty -Path $regPath -Name "AccentPalette" -Value $accentPaletteBlob -Type Binary

# 7. Safely calculate the ABGR and ARGB DWORD values using BitConverter
# AccentColorMenu and StartColorMenu use ABGR format (R, G, B, A)
$accentMenuBytes = [byte[]]@([byte]$colors[3].R, [byte]$colors[3].G, [byte]$colors[3].B, 255)
$accentColorMenu = [BitConverter]::ToInt32($accentMenuBytes, 0)

$startMenuBytes = [byte[]]@([byte]$colors[4].R, [byte]$colors[4].G, [byte]$colors[4].B, 255)
$startColorMenu = [BitConverter]::ToInt32($startMenuBytes, 0)

# Set the Menu colors
Set-ItemProperty -Path $regPath -Name "AccentColorMenu" -Value $accentColorMenu -Type DWord
Set-ItemProperty -Path $regPath -Name "StartColorMenu"  -Value $startColorMenu -Type DWord


# --- DWM KEYS (Borders, Titlebars, and Glow) ---
$regPathDWM = "HKCU:\Software\Microsoft\Windows\DWM"

# 1. AccentColor uses ABGR format (Red, Green, Blue, Alpha)
$dwmBytes = [byte[]]@([byte]$baseRgb.R, [byte]$baseRgb.G, [byte]$baseRgb.B, 0)
$dwordColor = [BitConverter]::ToInt32($dwmBytes, 0)
Set-ItemProperty -Path $regPathDWM -Name "AccentColor" -Value $dwordColor -Type DWord

# 2. AccentColorInactive uses ABGR format (Red, Green, Blue, Alpha)
$inactiveBytes = [byte[]]@([byte]$inactiveRgb.R, [byte]$inactiveRgb.G, [byte]$inactiveRgb.B, 0)
$dwordInactiveColor = [BitConverter]::ToInt32($inactiveBytes, 0)
Set-ItemProperty -Path $regPathDWM -Name "AccentColorInactive" -Value $dwordInactiveColor -Type DWord

# 3. ColorizationColor uses ARGB format! Notice the byte order is reversed: (Blue, Green, Red, Alpha)
# We set Alpha to 0xC4 (196) for standard DWM transparency matching. Change 0xC4 to 255 for opaque.
$colorizationBytes = [byte[]]@([byte]$baseRgb.B, [byte]$baseRgb.G, [byte]$baseRgb.R, 0xC4)
$dwordColorization = [BitConverter]::ToInt32($colorizationBytes, 0)
Set-ItemProperty -Path $regPathDWM -Name "ColorizationColor" -Value $dwordColorization -Type DWord

# 4. ColorizationAfterglowBalance is a standard int scaling (usually left at 10)
Set-ItemProperty -Path $regPathDWM -Name "ColorizationAfterglowBalance" -Value 10 -Type DWord


Write-Host "AccentPalette, Inactive Borders, and DWM Colorization successfully generated and applied."
Write-Host "Restarting Windows Explorer to reflect changes..."

# 8. Restart Explorer