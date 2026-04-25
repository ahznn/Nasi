# --- CONFIGURATION ---
$cssFile = "$env:USERPROFILE\.cache\wal\colors.css"
$varFile = "$env:USERPROFILE\Documents\Rainmeter\Skins\Bouquet Suite II\@Resources\Variables.inc"

# Mapping Pywal CSS variables to your Rainmeter variable names
$mapping = @{
    'color1'  = 'ColorFG'
    'color4'  = 'ColorBG'
    'color6'  = 'ColorA1'
    'color9' = 'ColorA2'
}

# Helper function to convert #Hex to R,G,B
function Convert-HexToRGB($hex) {
    $hex = $hex.TrimStart('#')
    $r = [System.Convert]::ToInt32($hex.Substring(0,2), 16)
    $g = [System.Convert]::ToInt32($hex.Substring(2,2), 16)
    $b = [System.Convert]::ToInt32($hex.Substring(4,2), 16)
    return "$r,$g,$b"
}

if (Test-Path $cssFile) {
    # 1. Get the new colors from Pywal
    $newColors = @{}
    $cssLines = Get-Content $cssFile | Where-Object { $_ -match '--' }
    foreach ($line in $cssLines) {
        if ($line -match '--(?<name>[\w-]+):\s*(?<color>#[\da-fA-F]{6})') {
            $walName = $Matches['name']
            if ($mapping.ContainsKey($walName)) {
                $newColors[$mapping[$walName]] = Convert-HexToRGB $Matches['color']
            }
        }
    }

    # 2. Read the existing Variables.inc
    $content = Get-Content $varFile

    # 3. Process each line and replace if it matches our color variables
    $newContent = foreach ($line in $content) {
        $updatedLine = $line
        foreach ($varName in $newColors.Keys) {
            # Regex looks for "VariableName=Value" and replaces the Value part
            if ($line -match "^$varName\s*=") {
                $updatedLine = "$varName=$($newColors[$varName])"
                break
            }
        }
        $updatedLine
    }

    # 4. Save with UTF-8 NO BOM using .NET
    $Utf8NoBom = New-Object System.Text.UTF8Encoding($false)
    [System.IO.File]::WriteAllLines($varFile, $newContent, $Utf8NoBom)
    
    Write-Host "Variables.inc updated successfully (UTF-8 No BOM)!"
} else {
    Write-Error "Could not find Pywal CSS at $cssFile"
}