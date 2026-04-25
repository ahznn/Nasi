# --- Configuration Paths ---
# Default pywal cache directory on Windows
$WalPath = "$env:USERPROFILE\.cache\wal\colors.json"

# Change this if your komorebi.json is located somewhere else
$KomorebiPath = "$env:USERPROFILE\komorebi.json" 

# --- 1. Validate Pywal Output ---
if (-Not (Test-Path $WalPath)) {
    Write-Host "Error: Pywal colors.json not found at $WalPath. Have you run 'wal -i <image>' yet?" -ForegroundColor Red
    exit
}

# --- 2. Extract Pywal Colors ---
$WalData = Get-Content $WalPath -Raw | ConvertFrom-Json

# Pick the colors you want to map. 
# Pywal gives you color0 through color15. 
# Typically, color2/color4 make good accents, and color8 is a nice muted inactive color.
$AccentColor = $WalData.colors.color4
$InactiveColor = $WalData.colors.color8

# --- 3. Update komorebi.json Safely ---
$ConfigText = Get-Content $KomorebiPath -Raw

# We use regex here so we don't break the standard JSON structure or remove your comments
$ConfigText = $ConfigText -replace '"single":\s*".*?"', "`"single`": `"$AccentColor`""
$ConfigText = $ConfigText -replace '"unfocused":\s*".*?"', "`"unfocused`": `"$InactiveColor`""
$ConfigText = $ConfigText -replace '"floating":\s*".*?"', "`"floating`": `"$AccentColor`""

# --- 4. Save and Reload ---
Set-Content -Path $KomorebiPath -Value $ConfigText
Write-Host "Updated komorebi.json with new colors!" -ForegroundColor Yellow

# Tell komorebi to reload the config live
komorebic reload-configuration
Write-Host "Komorebi configuration reloaded successfully!" -ForegroundColor Green