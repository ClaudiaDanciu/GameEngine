# Game Engine in C++

This project implements a simple game engine in C++ using object-oriented principles. 
The engine consists of two types of game components: `GameComponent` for non-visual entities, and `DrawableGameComponent` for visual 2D entities with position and movement. 
The `Game` class controls these entities and updates them periodically.

## Features

- Object-oriented design with inheritance, polymorphism, and encapsulation.
- Randomized movement for drawable game components with position clamping.
- Standalone initialisation and termination functions.
- Periodic updates of game components every second for 5 iterations.

## Requirements

- A C++ compiler supporting C++11 (or later).
- macOS or any platform with a compatible C++ compiler installed.

## Installation and Setup

1. **Install Xcode Command Line Tools (for macOS)**:
   Open the Terminal and install the tools using the following command:
   xcode-select --install
2. **Clone the Project**:
If using terminal, you can clone the directory using the following command: 
git clone https://github.com/ClaudiaDanciu/GameEngine
3. **To compile the code**:
Navigate to the project directory in your terminal using the following command to enable the C++11 standard**
g++ -std=c++11 Main.cpp Game.cpp GameComponent.cpp DrawableGameComponent.cpp -o GameEngine
4. **To run the program**:
Execute the program by writing in the terminal:
./GameEngine

Ensure you have installed XCode command line tools.
 
