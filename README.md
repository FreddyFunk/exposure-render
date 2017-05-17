## Introduction

This is a build of exposure-render using Visual Studio 2015 and VTK v 7.1.1 and Qt v 5.8.0 on Windows 8.1 machine. This port has been developed by Dr. Muhammad Mobeen Movania for research and educational purposes only. We are grateful to Thomas Kroes who is the author of the original exposure-render framework.

## Download the required libraries

First install CUDA v 8.0 toolkit from NVIDIA. Next download VTK v 7.1.1 from (http://www.vtk.org/files/release/7.1/VTK-7.1.1.zip) and Qt 5.8.0 from (https://download.qt.io/official_releases/qt/5.8/5.8.0/). 
Ensure that you have extracted the files at a location on your harddisk. Use CMake to build VTK 7.1.1. Ensure that QT GUI build support is enabled in VTK by setting the appropriate flags in CMake.  Once the CMake project generation is complete, open the VisualStudio 2015 solution and build VTK 7.1.1 for both Debug and Release build.

## Setting up Environment Variables
Inorder to ensure that the project compiles without errors, you have to setup 3 environment variables as follows:

QT5_ROOT = {Path to 5.8 sub-folder in Qt root directory}

VTK7_ROOT = {Path to root folder of VTK 7.1.1}

VTK7_BUILD_ROOT = {Path to build folder of VTK 7.1.1}

So assuming that my QT5 library is installed in E:/Qt/Qt5.8.0_x64 , VTK build folder is E:\VTK-7.1.1\Build_VS2015_x64 and VTK root folder is E:\VTK-7.1.1, then the environment variables will be set as follows:

QT5_ROOT = E:/Qt/Qt5.8.0_x64/5.8

VTK7_ROOT = E:/VTK-7.1.1

VTK7_BUILD_ROOT = E:/VTK-7.1.1/Build_VS2015_x64

Once all of the setup is complete, you can open the ExposureRender.sln file in the Build_vs2015 directory. This should compile and build successfully.

## QT class MOC-ing
For QT classes containing the QOBJECT macro, MOC-ing is required. To enable this seamlessly, a .bat file GenerateMOCs.bat is provided in the Sources sub-folder. After you have modified the QT related classes, call the GenerateMOCs.bat file and it will generate the moc_*.cpp files*_ for you which will be added to the solution automatically.

## Copying datasets from Examples folder at the root of this repository
In the root folder of this repository, there is an Examples folder which contains all datasets that are used in the Exposure-Render application. You need to copy these in the appropriate sub-directory (Debug/Release) which contains your compiled .exe file. There is a todo.txt file in the Examples sub-folder to remind you.
Please ensure that you do this step before you run the demo application otherwise the application will crash.

#############################
Original Readme Starts Here #
#############################
# Exposure Render

Exposure Render is a CUDA based volume raycaster, enhanced with physically based light transport. More information about the rendering algorithm can be found here:
* [An interactive photo-realistic volume rendering framework](http://graphics.tudelft.nl/Publications/kroes_exposure_2012)  
T. Kroes, F. H. Post, C. P. Botha
* [Visibility sweeps for joint-hierarchical importance sampling of direct lighting for stochastic volume rendering](http://graphics.tudelft.nl/Publications-new/2015/KEE1)  
T. Kroes, M. Eisemann, E. Eisemann

The latest windows executable can be found [here](https://github.com/ThomasKroes/exposure-render/releases/tag/1.1.0)

![https://graphics.tudelft.nl/publications/](/Images/manix.png)

## Building Exposure Render from source code
If you are eager to build Exposure Render yourself you should clone the [release110](https://github.com/ThomasKroes/exposure-render.release110.git) repository and follow  [these](https://github.com/ThomasKroes/exposure-render.release110/blob/master/build.md) instructions .

## System requirements

* Microsoft Windows XP, Vista, or 7.
* At least 1GB of system memory.
* NVIDIA CUDA-compatible GPU with compute capability 1.0 and at least 512 megabytes of DRAM. GTX270 or higher is recommended
* At the moment, larger data sets might give problems, we are working on that!

## Developer(s)

Thomas Kroes

Affiliations:

**Delft University of Technology (TU Delft)**  
Computer Graphics and Visualization (CGV)  
*t.kroes at tudelft.nl*

**Leids Universitair medisch centrum (LUMC)**  
Laboratorium voor Klinische en Experimentele Beeldverwerking (LKEB)  
*t.kroes at lumc.nl*

## Acknowledgements

* Osirix Imaging Software for sharing the medical data sets
* Volvis website for the engine and bonsai data set
* Fugue icons for the icon database

## Tested system configurations

Exposure Render has been tested on the following system configurations using Nvidia hardware:

* Windows 7 (64 bit) + Quadro FX1700
* Windows 7 (64 bit) + GTS240
* Windows 7 (64 bit) + GTS250
* Windows 7 (64 bit) + GTS450
* Windows 7 (64 bit) + GTX260
* Windows 7 (64 bit) + GTX270
* Windows 7 (64 bit) + GTX460
* Windows 7 (64 bit) + GTX470
* Windows 7 (64 bit) + GTX560
* Windows 7 (64 bit) + GTX570
* Windows 7 (64 bit) + GTX580

*Please mention your complete system setup when you report a bug: (OS (32/64 bit), graphics card, driver version etc.), possibly along with screen shots and error messages. Help make Exposure Render stable!*
