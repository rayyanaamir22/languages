# C++ Semantics Overview

This document outlines the key semantics and organizational concepts for using C++ in this repository.

## Folder Structure

- **`Basics/`**: Fundamental C++ concepts and examples.
- **`Algorithms/`**: Algorithmic problems and solutions.
- **`OOP/`**: Object-Oriented Programming concepts.
- **`STL/`**: Standard Template Library usage.
- **`sols/`**: Contains solution files for exercises.
- **`starter-code/`**: Contains starter code for exercises.

Organize your code by topic and use the appropriate subfolders for solutions and starter code.

## Accessing Files and Code

- Use `#include` to access header files or other C++ files.
- For custom headers, use double quotes: `#include "myheader.h"`.
- For standard library headers, use angle brackets: `#include <iostream>`.
- Relative paths can be used for headers in subfolders: `#include "../sols/arrays.cpp"` (not recommended for large projects).

## Namespaces

- Namespaces prevent name conflicts and organize code.
- The standard library is in the `std` namespace: `std::cout`, `std::vector`.
- You can define your own namespace:
  ```cpp
  namespace myspace {
      int x;
  }
  ```
- Access with `myspace::x`.
- Avoid `using namespace std;` in headers or global scope to prevent conflicts.

## Header Files

- Header files (`.h` or `.hpp`) declare functions, classes, and variables.
- Source files (`.cpp`) implement them.
- Use include guards or `#pragma once` to prevent multiple inclusion:
  ```cpp
  #ifndef MYHEADER_H
  #define MYHEADER_H
  // declarations
  #endif
  ```
- Include headers in your `.cpp` files as needed. 