# LAMMPS files | First Donev Workshop

## Download files

The three files necessary to start the tutorials must be downloaded with the same folder:

- [input.lmp](https://raw.githubusercontent.com/simongravelle/lammps-donev/refs/heads/main/lammps-files/input.lmp) (the main input)
- [parameters.inc](https://raw.githubusercontent.com/simongravelle/lammps-donev/refs/heads/main/lammps-files/parameters.inc) (the parameter file)
- [water.mol](https://raw.githubusercontent.com/simongravelle/lammps-donev/refs/heads/main/lammps-files/water.mol) (the water molecule file)

They are the same files as those provided in
the shared [Google doc](https://drive.google.com/drive/folders/1w_eACvOFX7Y8u7GfUIAjbnW0elpqK6we?usp=sharing).

Alternatively, these three files can be downloaded as a single compressed file:

- a single [.zip](https://github.com/simongravelle/lammps-donev/raw/refs/heads/main/lammps-files.zip) file
- a single [.tar.xz](https://github.com/simongravelle/lammps-donev/raw/refs/heads/main/lammps-files.tar.xz) file
- a single [.7z](https://github.com/simongravelle/lammps-donev/raw/refs/heads/main/lammps-files.7z) file

## Download LAMMPS-GUI

LAMMPS-GUI can be downloaded from [www.lammps.org/workshops/Aug25/tutorial/](https://www.lammps.org/workshops/Aug25/tutorial/).
Alternatively, LAMMPS-GUI can also be downloaded from these links:

- [LAMMPS-GUI (.exe)](https://github.com/lammps/lammps/releases/download/stable_22Jul2025/LAMMPS-Win10-64bit-GUI-22Jul2025.exe) for Windows
- [LAMMPS-GUI (.dmg)](https://github.com/lammps/lammps/releases/download/stable_22Jul2025/LAMMPS-macOS-multiarch-GUI-22Jul2025.dmg) for macOS
- [LAMMPS-GUI (.tar.gz)](https://github.com/lammps/lammps/releases/download/stable_22Jul2025/LAMMPS-Linux-x86_64-GUI-22Jul2025.tar.gz) for Linux (tarball, prefered option)
- [LAMMPS-GUI (.flatpack)](https://github.com/lammps/lammps/releases/download/stable_22Jul2025/LAMMPS-Linux-x86_64-GUI-22Jul2025.tar.gz)  for Linux [(flatpak)](https://flatpak.org/)

## Instructions (from [lammps.org](https://www.lammps.org/workshops/Aug25/tutorial/))

### Windows

Download the Windows installer package and find it in your Downloads folder.
Depending on your security settings, you may have to explicitly tell Windows to
download the file and then confirm twice to keep the downloaded file despite the
claims that it may be dangerous and insecure.

Execute the Windows installer package and - if desired - customize the installation
location. The installer contains LAMMPS-GUI, the command-line LAMMPS executable (lmp),
several related tools, potential files, and example inputs from the source code

### macOS

Download the macOS DMG file and open it with a double-click. The mounted disk
image will have a graphical installer, which instructs you to drag the LAMMPS
app into your Applications folder. Doing so will require admin rights.

Follow the steps in the README.txt file to enable access to the command-line
executables available in addition to LAMMPS-GUI.

## Linux tarball

Download the Linux tarball and find it in your Downloads folder. Extract the
tarball either via Right-Click -> Extract, or use a terminal with the tar command:

```bash
    cd ~/Downloads
    tar -xzvvf LAMMPS-Linux-x86_64-GUI-22Jul2025.tar.gz
    cd LAMMPS_GUI
    ./lammps-gui
```

The Linux package contains a LAMMPS_GUI folder with the various commands. If
desired, you can move this folder to a more suitable, permanent location and
update your PATH environment variable to search this folder for commands. Or
you can launch LAMMPS-GUI directly from that folder.

## Linux flatpak

Download the Linux flatpak bundle and find it in your Downloads folder. To
install applications from flatpak bundles, you first need to install the flatpak
environment into your Linux system. From a terminal window you can install the
bundle into your account with the command: 

```bash
    cd ~/Downloads
    flatpak install --user LAMMPS-Linux-x86_64-GUI-22Jul2025.flatpak
```

The flatpak bundle should integrate the application into your desktop environment
and LAMMPS-GUI should be listed under "Applications -> Science".

 It is also possible to launch it from a terminal window with:
```bash
    flatpak run org.lammps.lammps-gui
 ```