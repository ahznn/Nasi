# Nasi
i did not make any of the app and customization. 

# Pre-Installation

You will do MOST OF THE THINGS in `pwsh`, How do you do/open it? 

### pwsh

- Install/Get `pwsh` on microsoft store. 

- Open `cmd`; open it by typing `cmd` in windows search, then Run as Administrator.

After that

- Type `pwsh` in there, then enter.

Now you should be in `pwsh`, IF you don't have `pwsh` Run:

```powershell
winget install -e Microsoft.PowerShell
```
Reopen `cmd` then type `pwsh`. I think now you should be good.

### Git

- Install [`git`](https://git-scm.com/install/windows), from official site [`git`](https://git-scm.com/install/windows).

or

Run
``` powershell
winget install -e --id Git.Git
```

on `pwsh` like mentioned

### VSCode

- Install [`VSCode`](https://code.visualstudio.com/), from [`https://code.visualstudio.com/`](https://code.visualstudio.com/).

Just Install It like normal.

## scoop

Now [`scoop`](https://scoop.sh/), you can click that link and follow the guide or install it by typing (this code below, on `pwsh`):
```powershell
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
Invoke-RestMethod -Uri https://get.scoop.sh | Invoke-Expression
```
Just Copy text/code above, paste it on your `pwsh`, then enter.

# winwal / pywal16

[`winwal`](https://github.com/scaryrawr/winwal/blob/main/README.md)

You can click link above for official guide, or just do the following.

You will need:
- [`python`](https://www.python.org/)

The list below is Included in [`winwal`](https://github.com/scaryrawr/winwal/blob/main/README.md) section, so you can ignore it for now.

- [`pywal6`](https://github.com/eylles/pywal16)
- [`colorthief`](https://github.com/fengsp/color-thief-py)
- [`colorz`](https://github.com/metakirby5/colorz)(does not install on arm64 versions of Python on Windows)
- [`haishoku`](https://github.com/LanceGin/haishoku)
- [`imagemagick`](https://imagemagick.org/#gsc.tab=0)

These 2 Below are Optional.

- [`Go`](https://go.dev/doc/install)
- [`schemer2`](https://github.com/thefryscorer/schemer2)

## Installing Python

Install python by typing:
```powershell
winget install Python.Python.3.13
```
Reopen your `cmd`, type/run `pwsh` again, then type `py` to check if Python is installed.

If it says no such thing exist, you need to add it to your Environment Variables.

## Installing winwal Dependencies

Now we're using `Python`/`py`.

To install and use [`winwal`](https://github.com/scaryrawr/winwal/blob/main/README.md) you need to install.

[`pywal6`](https://github.com/eylles/pywal16) 
```powershell
python -m pip install pywal16
```
[`colorthief`](https://github.com/fengsp/color-thief-py)
```powershell
python -m pip install colorthief 
```
[`colorz`](https://github.com/metakirby5/colorz)(does not install on arm64 versions of Python on Windows)
```powershell
python -m pip install colorz
```
[`haishoku`](https://github.com/LanceGin/haishoku)
```powershell
python -m pip install haishoku
```
[`imagemagick`](https://imagemagick.org/#gsc.tab=0)
```powershell
winget install imagemagick.imagemagick
```

All of this Runs/Typed on `pwsh`.

Also For [`schemer2`](https://github.com/thefryscorer/schemer2), install [`Go`](https://golang.org/doc/install) and run:

```powershell
go install github.com/thefryscorer/schemer2@latest
```
## Installing winwal

Clone [`winwal`](https://github.com/scaryrawr/winwal/blob/main/README.md) repository by typing/running:
```powershell
git clone https://github.com/scaryrawr/winwal
```
Open your `pwsh` profile by typing:
```powershell
code $profile
```
It should open your `powershell` profile on `notepad`/`vsc`, put this in:
```powershell
Import-Module C:\Windows\System32\winwal\winwal.psm1
Update-WalTheme -Backend haishoku
```

Put your directory where [`winwal`](https://github.com/scaryrawr/winwal/blob/main/README.md) is stored, if  `Import-Module` default directory doesn't work. It should be working though.

You can use other backend if you want, like [`colorthief`](https://github.com/fengsp/color-thief-py), [`colorz`](https://github.com/metakirby5/colorz) or something.

That's it, you finished the first step.

# YASB

To install [`yasb`](https://github.com/amnweb/yasb), you can refer to [`yasb installation`](https://github.com/amnweb/yasb/wiki/Installation) guide 

or

install it using `scoop` by runninng.
```powershell
scoop bucket add extras
scoop install extras/yasb
```
on `pwsh`

That's it

## YASB CONFIG
`yasb` configuration should be located at

```
C:\Users\[YourName]\.config\yasb
```

You can use config from this repository, by downloading `config.yaml` and `styles.css` inside `YASB`/`YASB Alt` folder.

Then paste it in Your `yasb` configuration folder like mentioned.

### ============== NOTE ============== 

You will NEED to change Folder Address in `config.yaml` and `styles.css` to Your Own Folder.

You can open `config.yaml` and `styles.css` file by double-clicking it

### WHAT YOU NEED TO CHANGE. `config.yaml`:

- menu_list

`CTRL+F` to search `menu_list`.
```
menu_list:
      - { title: "Home", path: "~" }
      - { title: "Downloads", path: "C:\\Users\\[YourName]\\Downloads"}
      - { title: "Documents", path: "C:\\Users\\[YourName]\\Documents"}
      - { title: "Pictures", path: "C:\\Users\\[YourName]\\Pictures"}
      - { title: "Videos", path: "C:\\Users\\[YourName]\\Videos"}
```


# Rainmeter

Install [`Rainnmeter`](https://www.rainmeter.net/) by going to.

[`https://www.rainmeter.net/`](https://www.rainmeter.net/)

Install it like normal.

## Rainmeter CONFIG

`Rainmeter` skin should be located at
```
C:\Users\[YourName]\Documents\Rainmeter\Skins
```

You can use `Rainmeter` skin in this repository, by: 

Downloading `Rainmeter` folder. Extract.

Then put `Bouquet Suite II (More)` to Your `Rainmeter` folder like mentioned.

### ============== NOTE ============== 

Inside the `Rainmeter` Skin / `Bouquet Suite II (More)` there is `Scripts` folder inside `@Resources`.

That `Scripts` folder contain scripts that sync you `yasb` and `Rainmeter`.

You can move it to somewhere else but, you would need to change the folder address inside `yasb` `config.yaml`.
