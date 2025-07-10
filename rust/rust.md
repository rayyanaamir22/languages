# Rust Basics Learning Repository

This repository is designed to help you learn Rust from the ground up, with organized starter code and solution folders for each topic.

## Structure

- `basics/` — Fundamental Rust concepts (arrays, loops, functions, ownership, etc.)
  - `starter-code/` — Starter code templates for each topic
  - `sols/` — Your solutions and practice code
- `algorithms/` — Classic algorithms and problem-solving techniques
  - `starter-code/` — Templates for sorting, searching, recursion, dynamic programming, etc.
  - `sols/` — Your solutions
- `oop/` — Object-Oriented Programming concepts (structs, traits, encapsulation, inheritance, polymorphism)
  - `starter-code/` — Starter code for OOP topics
  - `sols/` — Your solutions
- `standard_lib/` — Standard Library usage (Vec, HashMap, Option, Result, iterators, etc.)
  - `starter-code/` — Starter code for std usage
  - `sols/` — Your solutions
- `finance_api/` — Simple usage of a finance API in Rust
  - `starter-code/` — Starter code for API usage
  - `sols/` — Your solutions

## How to Use

1. **Start with `starter-code/`**: Each topic has a template file with TODOs. Try to solve the problems or fill in the code yourself.
2. **Write your solution in `sols/`**: Copy the starter code or write your own solution in the corresponding file in the `sols/` folder.
3. **Experiment and Learn**: Use these files to experiment, make mistakes, and learn Rust hands-on.

## How to Run a Single Rust File

You can run a single Rust file (for quick experiments) using:

```sh
rustc your_file.rs
./your_file

# e.g.
rustc rust/basics/sols/arrays.rs -o rust/basics/sols/arrays
./rust/basics/sols/arrays
```

Or, using [cargo-script](https://github.com/DanielKeep/cargo-script) (if installed):

```sh
cargo script your_file.rs
```

## Notes
- Targeted at learning and experimentation. Feel free to add more topics or folders as you progress!
- `.rs.bk` and other build artifacts are ignored via `.gitignore` and should not be committed.

Happy coding! 