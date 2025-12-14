# 🎨 CSE422 Computer Graphics Lab - Fall 2025

<div align="center">

[![OpenGL](https://img.shields.io/badge/OpenGL-GLUT-blue.svg)](https://www.opengl.org/)
[![Python](https://img.shields.io/badge/Python-3.x-green.svg)](https://www.python.org/)
[![C++](https://img.shields.io/badge/C++-11-red.svg)](https://isocpp.org/)
[![CodeBlocks](https://img.shields.io/badge/IDE-Code::Blocks-orange.svg)](http://www.codeblocks.org/)
[![Matplotlib](https://img.shields.io/badge/Matplotlib-3.x-purple.svg)](https://matplotlib.org/)

*A comprehensive collection of fundamental computer graphics algorithms and interactive visualizations*

</div>

---

## 📖 Overview

This repository showcases my journey through the **CSE422 Computer Graphics Lab** course during **Fall 2025 semester**. It contains implementations of fundamental computer graphics algorithms, from basic line drawing to advanced 2D transformations and animations. Each project demonstrates core concepts in computer graphics using both **C++/OpenGL** and **Python** implementations.

## 🏗️ Repository Structure

### 🎯 Core Graphics Algorithms

#### 📐 **1. Colored Rectangle** (`1_Colored_Rectangle/`)
- **Description**: Basic 2D rendering showcasing colored primitive drawing using OpenGL
- **Features**: Simple rectangle rendering with solid color fill
- **Technologies**: C++, OpenGL GLUT
- **Key Concepts**: Basic OpenGL setup, primitive drawing, color specification

#### 📏 **2. DDA Algorithm** (`2_DDA_Algorithm/`)
- **Description**: Implementation of Digital Differential Analyzer for line drawing
- **Features**: 
  - Interactive user input for line endpoints
  - Smooth line rasterization using floating-point arithmetic
  - Real-time line drawing
- **Technologies**: C++, OpenGL GLUT
- **Key Concepts**: Line rasterization, coordinate systems, incremental algorithms

#### ⚡ **3. Bresenham's Algorithm** (`3_Bresenhams_Algorithm/`)
- **Description**: Efficient integer-based line drawing algorithm
- **Features**:
  - Optimized line drawing without floating-point operations
  - Interactive endpoint selection
  - Pixel-perfect line rendering
- **Technologies**: C++, OpenGL GLUT
- **Key Concepts**: Integer arithmetic, decision parameters, rasterization optimization

#### ⭕ **4. Midpoint Circle Algorithm** (`4_Mid_Point_Circle_Algorithm/`)
- **Description**: Efficient circle drawing using midpoint decision algorithm
- **Features**:
  - User-defined radius input
  - Eight-way symmetry exploitation
  - Pixel-accurate circle rendering
- **Technologies**: C++, OpenGL GLUT
- **Key Concepts**: Circle rasterization, symmetry, decision parameters

#### 🔵 **5. Types of Circles** (`5_TypesOfCircle/`)
- **Description**: Comprehensive circle and polygon drawing demonstration
- **Features**:
  - Full circles and ovals (ellipses)
  - Half circles
  - Regular polygons (hexagons)
  - Switchable rendering modes
- **Technologies**: C++, OpenGL GLUT, trigonometric functions
- **Key Concepts**: Parametric equations, polygon approximation, geometric primitives

#### ⭐ **6. Colorful Star** (`6_Colorful_star/`)
- **Description**: Multi-colored star pattern using primitive composition
- **Features**:
  - Multiple overlapping star shapes
  - RGB color blending
  - Complex geometric design
- **Technologies**: C++, OpenGL GLUT
- **Key Concepts**: Geometric design, color theory, primitive composition

### 🎬 Animation & Transformations

#### 🚀 **7. 2D Object Animation** (`7_Two-dimensional_Object_Animation/`)
- **Description**: Basic linear animation of 2D objects
- **Features**:
  - Continuous object movement
  - Loop-based animation
  - Start/end position markers
- **Technologies**: C++, OpenGL GLUT
- **Key Concepts**: Animation loops, temporal updates, coordinate transformation

#### 📱 **8. 2D Object Translation** (`8_Two-dimensional_Object_Tranaslation/`)
- **Description**: Interactive object translation using keyboard controls
- **Features**:
  - Arrow key navigation
  - Real-time position updates
  - Smooth movement transitions
- **Technologies**: C++, OpenGL GLUT
- **Key Concepts**: Translation matrices, user interaction, event handling

#### 🔄 **9. 2D Object Rotation** (`9_Two-dimensional_Object_Rotation/`)
- **Description**: Interactive object rotation around center point
- **Features**:
  - Keyboard-controlled rotation (L/R keys)
  - Continuous rotation mode
  - Visual rotation feedback
- **Technologies**: C++, OpenGL GLUT
- **Key Concepts**: Rotation matrices, angular transformations, pivot points

#### 🎵 **10. 2D Animation with Spinning & Sound** (`10_Two-dimensional_Object_Animation_Spinning_Sound/`)
- **Description**: Advanced animation combining rotation, translation, and audio feedback
- **Features**:
  - Multi-modal interaction (mouse, keyboard, special keys)
  - Audio feedback during rotation
  - Combined transformation effects
  - Interactive spin control
- **Technologies**: C++, OpenGL GLUT, Windows multimedia API
- **Key Concepts**: Multi-modal interfaces, audio integration, combined transformations

### 🎓 Final Projects

#### 🚗 **11. Final Lab Evaluation** (`11_Final_Lab_Evaluation/`)
Contains comprehensive final projects:
- **2D Car Drawing**: Complex geometric object composition
- **Enhanced Midpoint Circle**: Advanced circle algorithm implementation

#### 📋 **12. Final Lab Report** (`12_Fianl_Lab_Report/`)
- **Contents**: Complete documentation and analysis
- **Files**: `FianlLabReport.pdf`, implementation examples, input/output samples

---

## 🐍 Python Alternative Implementations

### 📁 **`_Using__Python_/` Directory**

For accessibility and educational purposes, **Python implementations** of all major algorithms are provided:

| Algorithm | C++ Project | Python Script | Features |
|-----------|-------------|---------------|----------|
| **Colored Rectangle** | `1_Colored_Rectangle/` | `1_Colored_Rectangle.py` | Matplotlib-based rectangle drawing |
| **DDA Algorithm** | `2_DDA_Algorithm/` | `2_DDA.py` | Interactive line drawing with grid |
| **Bresenham's Algorithm** | `3_Bresenhams_Algorithm/` | `3_Bresenham.py` | Optimized line rasterization |
| **Midpoint Circle** | `4_Mid_Point_Circle_Algorithm/` | `4_Midpoint_Circle.py` | Circle drawing with point plotting |
| **Circle Types** | `5_TypesOfCircle/` | `5_TypesOfCircle.py` | Multiple circle/polygon types |
| **Colorful Star** | `6_Colorful_star/` | `6_Colorful_Star.py` | Multi-colored star patterns |
| **2D Animation** | `7_Two-dimensional_Object_Animation/` | `7_Two-dimensional_Object_Animation.py` | Smooth object animation |
| **2D Translation** | `8_Two-dimensional_Object_Tranaslation/` | `8_Two-dimensional_Object_Translation.py` | Keyboard-controlled movement |
| **2D Rotation** | `9_Two-dimensional_Object_Rotation/` | `9_Two-dimensional_Object_Rotation.py` | Interactive rotation with keys |
| **Animation + Sound** | `10_Two-dimensional_Object_Animation_Spinning_Sound/` | `10_Two-dimensional_Object_Animation_Spinning&Sound.py` | Advanced animation with audio |

---

## 🚀 Getting Started

### For C++/OpenGL Projects (CodeBlocks)

#### Prerequisites
- **Code::Blocks IDE** with MinGW compiler
- **OpenGL/GLUT** development libraries
- **Windows OS** (for sound-enabled projects)

#### Running Instructions
1. **Navigate** to any numbered project directory (e.g., `1_Colored_Rectangle/`)
2. **Open** the `.cbp` (CodeBlocks project) file
3. **Build** the project using CodeBlocks (`Build → Build`)
4. **Run** the executable (`Build → Run`)

#### Project Structure
Each C++ project contains:
```
Project_Directory/
├── main.cpp              # Main source code
├── ProjectName.cbp       # CodeBlocks project file
├── ProjectName.depend    # Dependency information
├── ProjectName.layout    # IDE layout settings
├── bin/Debug/            # Compiled executables
└── obj/Debug/            # Object files
```

### For Python Implementations

#### Prerequisites
```bash
pip install matplotlib numpy
# For sound-enabled projects:
pip install pygame  # (Windows: winsound is built-in)
```

#### Running Instructions
```bash
cd _Using__Python_/
python script_name.py
```

#### Example
```bash
python 4_Midpoint_Circle.py
# Follow on-screen prompts for radius input
```

---

## 🎮 Interactive Controls

### Keyboard Controls (C++ Projects)
| Key | Function | Projects |
|-----|----------|----------|
| **Arrow Keys** | Object Translation | Translation, Animation+Sound |
| **L** | Rotate Left | Rotation, Animation+Sound |
| **R** | Rotate Right | Rotation, Animation+Sound |
| **S** | Stop Rotation | Rotation, Animation+Sound |

### Mouse Controls
| Action | Function | Projects |
|--------|----------|----------|
| **Left Click** | Start Left Rotation | Animation+Sound |
| **Right Click** | Start Right Rotation | Animation+Sound |
| **Middle Click** | Alternative Rotation | Animation+Sound |

### Python Interactive Features
- **Real-time Animation**: Smooth matplotlib-based animations
- **Keyboard Events**: Arrow keys and letter keys for control
- **Parameter Input**: Console-based algorithm parameter input
- **Visual Feedback**: Grid overlays and color coding

---

## 🛠️ Technologies & Libraries

### C++ Development Stack
- **Language**: C++11/14
- **Graphics API**: OpenGL 3.x+
- **Windowing**: GLUT (OpenGL Utility Toolkit)
- **Audio**: Windows Multimedia API (`mmsystem.h`)
- **IDE**: Code::Blocks with MinGW

### Python Development Stack
- **Language**: Python 3.x
- **Visualization**: Matplotlib
- **Numerical Computing**: NumPy
- **Animation**: matplotlib.animation
- **Audio**: winsound (Windows), pygame (cross-platform)

---

## 📚 Educational Value

### Core Concepts Covered
- **Rasterization Algorithms**: DDA, Bresenham's line and circle algorithms
- **2D Transformations**: Translation, rotation, scaling matrices
- **Animation Principles**: Frame-based updates, temporal interpolation
- **User Interface Design**: Event-driven programming, input handling
- **Graphics Pipeline**: Vertex processing, primitive assembly, rasterization
- **Color Theory**: RGB color spaces, color blending
- **Geometric Algorithms**: Parametric equations, symmetry exploitation

### Learning Progression
1. **Basic Rendering** → Simple shapes and primitives
2. **Algorithm Implementation** → Classic rasterization techniques
3. **Interactivity** → User input and real-time updates
4. **Animation** → Time-based transformations
5. **Integration** → Multiple features and multimedia

---

## 🤝 Usage & Attribution

This repository serves as:
- **Educational Resource**: Learning fundamental computer graphics concepts
- **Reference Implementation**: Well-commented algorithm examples
- **Comparative Study**: C++ vs Python implementation approaches
- **Portfolio Showcase**: Comprehensive semester project collection

### For Students & Educators
- Each project is **self-contained** and **well-documented**
- **Progressive difficulty** from basic shapes to complex animations
- **Dual implementation** approach (C++/Python) for different learning styles
- **Interactive features** for hands-on experimentation

### For Developers
- **Clean, readable code** with comprehensive comments
- **Modular structure** for easy modification and extension
- **Cross-platform Python alternatives** for broader compatibility
- **Professional project organization** following industry standards

---

## 📊 Project Statistics

- **Total Projects**: 12 complete implementations
- **Programming Languages**: C++, Python
- **Graphics APIs**: OpenGL/GLUT, Matplotlib
- **Algorithms Implemented**: 6 core graphics algorithms
- **Interactive Features**: Keyboard, mouse, audio feedback
- **Documentation**: Comprehensive README, inline comments, final report

---

## 📈 Future Enhancements

Potential areas for expansion:
- **3D Graphics**: Extension to three-dimensional transformations
- **Advanced Algorithms**: Bezier curves, spline interpolation
- **Shader Programming**: GLSL implementation for modern OpenGL
- **Cross-Platform**: CMake build system for broader compatibility
- **Web Version**: WebGL/JavaScript ports for browser accessibility

---

## 🔗 Repository Information

- **Course**: CSE422 Computer Graphics Lab
- **Semester**: Fall 2025
- **Author**: ar-sayeem || sayeem-ar
- **Institution**: Daffodil International University
- **Last Updated**: December 2025

---

<div align="center">

### 🌟 **Explore, Learn, and Create!** 🌟

*This repository represents a comprehensive journey through fundamental computer graphics concepts, implemented with both traditional C++/OpenGL and modern Python approaches for maximum educational value.*

</div>