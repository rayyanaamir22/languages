# C++ Compilation Guide

This guide explains how to compile C++ code in this repository using common tools and commands.

## Using g++ (GNU Compiler)

- Compile a single file:
  ```sh
  g++ filename.cpp -o output
  ./output
  ```
- Compile with C++17 standard:
  ```sh
  g++ -std=c++17 filename.cpp -o output
  ./output
  ```
- Compile multiple files:
  ```sh
  g++ file1.cpp file2.cpp -o output
  ./output
  ```

## Compilation Flags

- `-Wall` : Enable all warnings
- `-O2`  : Optimization level 2
- `-g`   : Include debug information
- `-I<dir>` : Add directory to header search path

Example:
```sh
g++ -std=c++17 -Wall -O2 main.cpp -o main
```

## Using Makefiles (Optional)

For larger projects, a `Makefile` can automate compilation:
```makefile
all:
	g++ -std=c++17 main.cpp -o main
```
Run with:
```sh
make
```

## Notes
- Ensure you are in the correct directory when compiling.
- Use relative paths for files in subfolders.
- Clean up executables with `rm output` (macOS/Linux). 