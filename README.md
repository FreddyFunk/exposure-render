# Introduction

This is a build of exposure-render using Visual Studio 2015 and VTK v 7.1.1 and Qt v 5.8.0 on Windows 8.1 machine. This port has been developed by Dr. Muhammad Mobeen Movania for research and educational purposes only. We are grateful to Thomas Kroes who is the author of the original exposure-render framework.

# Setup
Download and install CUDA v 8.0 Toolkit using the installer provided by NVIDIA. Next, download the three required libraries i.e. VTK 7.1.1 (http://www.vtk.org/files/release/7.1/VTK-7.1.1.zip), QT 5.8.0 (https://download.qt.io/official_releases/qt/5.8/5.8.0/) and freeglut 3.0.0 (https://sourceforge.net/projects/freeglut/files/latest/download). Please ensure that the correct files are downloaded according to your machine. Extract the files to your hard disk. On Windows, there are offline installers available. Please ensure that you download and install the correct installer based on your platform and VisualStudio version. Use CMake to build VTK. Please ensure that Qt build support is enabled by setting the appropriate flags in CMake settings. After CMake has generated your project solution files, open visual studio and then build VTK7. Build both Debug and Release builds.
Create 4 environment variables and set them as follows

VTK7_ROOT = <Path to VTK 7.1.1 root folder>
VTK7_BUILD_ROOT = <Path to VTK 7.1.1 build folder>
QT5_ROOT = <Path to the 5.8 sub-folder in the Qt 5.8.0 root folder>
FREEGLUT3_BUILD_ROOT = <Path to freeglut3 build sub-folder in the freeglut3 root folder>

For example, if vtk 7.1.1 folder is setup on E:\VTK-7.1.1, VTK build folder is setup on E:\VTK-7.1.1\Build_VS2015_x64 folder, QT 5.8 sub-folder is installed in E:\Qt\Qt5.8.0_x64\5.8 and freeglut3 is setup in E:\freeglut3/build folder then the environment variables are setup as follows.
VTK7_ROOT = E:/VTK-7.1.1
VTK7_BUILD_ROOT = E:/VTK-7.1.1/Build_VS2015_x64
QT5_ROOT = E:/Qt/Qt5.8.0_x64/5.8
FREEGLUT3_BUILD_ROOT = E:/freeglut3/build

Go to the Build_vs2015/ExposureRender sub-directory and open ExposureRender.sln file. This opens VisualStudio 2015. Compile and Build the solution. Last thing that you need to do is to copy all datasets from the Examples folder on the root of the distribution to the Examples sub-folder inside Debug/Release folder which contains the generated .exe file. There is a TODO.txt file containing this information as a reminder for you.

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
