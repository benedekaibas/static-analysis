# 🧠 Static Analysis Toolkit in C++

This project is a personal learning journey into static analysis using C++. I'm working to get a deeper understanding of how compilers, static analyzers work. As part of that, I'll be building both simple and more advanced static analysis tools from the ground up, diving into concepts like dataflow analysis, control flow graphs, and abstract interpretation along the way.

## ✨ Motivation

I got interested in static analysis during my junior year in college. I got so much motivation for static analysis that it is the topic for my senior research thesis. This repository consists practice sets for learning static analysis and mathematics. Mathematics plays an important role in static analysis, so there will be a lots of mathematical concepts in the repository as well. Static analysis plays a key role in detecting bugs, security vulnerabilities, and performance issues before runtime. Tools like Clang-Tidy, Coverity, and the Clang Static Analyzer show how powerful code introspection can be. This project aims to demystify how such tools work—by building my own small analyzers in C++ and experimenting with compiler frameworks like Clang. 

## 📌 What This Project Covers

- Writing basic C++ static analyzers using AST and CFGs
- Parsing and analyzing C++ source code using Clang tooling
- Detecting issues such as:
  - Unused variables
  - Missing `break` statements in `switch` blocks
  - Use of uninitialized variables
  - Global variable access in multithreaded code
  - Memory mismanagement (`malloc()` without `free()`, etc.)
- Building a control flow graph from C++ functions
- Introducing dataflow analysis using lattice structures
- Exploring basic abstract interpretation concepts

## 📚 Topics and Concepts

This project touches on several theoretical and practical areas of computer science and mathematics:

- **Set theory** — for tracking variable definitions and uses
- **Graph theory** — for control and data flow representation
- **Lattice theory** — for abstract interpretation and dataflow merging
- **Predicate logic** — for expressing and verifying code conditions
- **Automata theory** — for modeling taint propagation and symbolic execution

## 🛠 Tech Stack

- **C++17/20**
- **Clang LibTooling** – for AST inspection and building analyzers
- **CMake** – for managing builds
- **LLVM** – optional, for deeper compiler integration
- **Graphviz** – for visualizing control/data flow graphs

## 🧪 Planned Analyzer Modules

| Module                    | Status      | Description |
|--------------------------|-------------|-------------|
| Unused Variable Detector | 🔜 Planned  | Finds local variables that are declared but never used |
| Switch Fallthrough Check | 🔜 Planned  | Detects missing `break` in `switch` statements |
| Malloc/Free Checker      | 🔜 Planned  | Ensures dynamic memory is correctly freed |
| Thread Safety Scanner    | 🔜 Planned  | Reports unsafe access to global/shared data |
| Dead Code Identifier     | 🔜 Planned  | Highlights unreachable code blocks |
| CFG Visualizer           | 🔜 Planned  | Outputs control flow graph of a function as a DOT file |

## 📈 Learning Goals

- Understand how ASTs and CFGs are constructed in Clang
- Write visitor patterns to walk and analyze code
- Implement simple static checks manually
- Build a basic abstract interpreter
- Learn how compilers reason about code statically
