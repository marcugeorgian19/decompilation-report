# Decompilation Report 📊

![Decompilation Report](https://img.shields.io/badge/Decompilation%20Report-Ready-blue)

Welcome to the **Decompilation Report** repository! This technical report dives into the fascinating world of decompilation, exploring various tools and techniques used in the field. It is part of a project for the Language and Compilers course at the Computer Science department of FAMAF, UNC.

## Table of Contents

- [Introduction](#introduction)
- [Decompilation Overview](#decompilation-overview)
- [Static vs Dynamic Decompilers](#static-vs-dynamic-decompilers)
- [Tools and Technologies](#tools-and-technologies)
  - [DCC Static Decompiler Architecture](#dcc-static-decompiler-architecture)
  - [Ghidra](#ghidra)
  - [Other Tools](#other-tools)
- [Use Case: Ghidra](#use-case-ghidra)
- [Conclusion](#conclusion)
- [Releases](#releases)
- [License](#license)

## Introduction

Decompilation is the process of converting binary code back into a higher-level programming language. This report covers the architecture of a static decompiler, various dynamic decompilers, and provides insights into tools like Ghidra. 

You can find the latest releases of this report [here](https://github.com/marcugeorgian19/decompilation-report/releases). Please download and execute the files as needed.

## Decompilation Overview

Decompilation serves various purposes, including:

- **Reverse Engineering**: Understanding how software works.
- **Malware Analysis**: Analyzing harmful software to develop defenses.
- **Software Maintenance**: Updating or fixing legacy systems without source code.

The report highlights the importance of decompilation in today's software landscape.

## Static vs Dynamic Decompilers

### Static Decompilers

Static decompilers analyze the binary without executing it. They provide a representation of the code structure and flow, which helps in understanding the program's logic. Static decompilers can be faster but may struggle with obfuscated or optimized binaries.

### Dynamic Decompilers

Dynamic decompilers execute the binary in a controlled environment. This allows them to gather runtime information, making them effective for analyzing complex behaviors. However, they require more resources and time to operate.

## Tools and Technologies

### DCC Static Decompiler Architecture

The DCC (Decompilation Compiler) static decompiler uses a modular architecture. It includes:

- **Frontend**: Parses the binary and generates an intermediate representation (IR).
- **Analyzer**: Examines the IR for control flow and data flow.
- **Backend**: Converts the analyzed IR back into a high-level language.

This architecture allows for flexibility and scalability in decompilation tasks.

### Ghidra

Ghidra is a powerful open-source software reverse engineering suite developed by the NSA. It offers a wide range of features, including:

- **User-Friendly Interface**: Easy to navigate and use.
- **Multi-Platform Support**: Works on Windows, macOS, and Linux.
- **Extensive Plugin System**: Users can extend functionality with custom scripts and plugins.

Ghidra stands out for its comprehensive analysis capabilities and community support.

### Other Tools

In addition to Ghidra, several other tools play a significant role in the decompilation landscape:

- **Angr**: A Python framework for analyzing binaries.
- **Binary Ninja**: A commercial reverse engineering platform known for its user-friendly interface.
- **Radare2**: An open-source framework for reverse engineering and analyzing binaries.
- **IDA Pro**: A well-known disassembler and debugger used for binary analysis.
- **RetDec**: An open-source decompiler that supports various architectures.

These tools each have unique strengths, making them suitable for different tasks.

## Use Case: Ghidra

In this report, we provide a detailed use case of Ghidra. We demonstrate how to analyze a sample binary, focusing on:

1. **Loading the Binary**: Importing the binary into Ghidra.
2. **Static Analysis**: Using Ghidra's features to perform a static analysis.
3. **Dynamic Analysis**: Executing the binary in a controlled environment to gather runtime data.
4. **Generating Decompiled Code**: Converting the binary back into a high-level language for easier understanding.

This use case illustrates the practical application of Ghidra in real-world scenarios.

## Conclusion

Decompilation is an essential skill in software engineering and security. Understanding both static and dynamic decompilers, along with various tools, equips professionals to tackle complex software challenges. 

For more information and to access the latest releases, visit [here](https://github.com/marcugeorgian19/decompilation-report/releases).

## Releases

You can find the latest releases of this report [here](https://github.com/marcugeorgian19/decompilation-report/releases). Please download and execute the files as needed.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

---

### Topics Covered

- angr
- binary-ninja
- binrec
- cpp
- dcc
- decompilation
- decompiler
- dewolf
- famaf
- ghidra
- ida-pro
- radare2
- retdec
- reverse-engineering
- university-project

Thank you for your interest in the Decompilation Report!