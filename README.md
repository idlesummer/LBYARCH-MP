# **SAXPY in C and x86-64 Assembly**

This project demonstrates the implementation of the SAXPY operation (`A * X + Y = Z`) in both C and x86-64 assembly. It compares the performance of the two implementations and validates their correctness.

---

## **Table of Contents**
1. [Project Overview](#project-overview)
2. [Requirements](#requirements)
3. [How to Run](#how-to-run)
4. [Screenshots](#screenshots)
   - [Correctness Check (C)](#correctness-check-c)
   - [Correctness Check (ASM)](#correctness-check-asm)
5. [Comparative Execution Time](#comparative-execution-time)
6. [Performance Analysis](#performance-analysis)
7. [Video Demonstration](#video-demonstration)
8. [Source Code Overview](#source-code-overview)

---

## **Project Overview**
SAXPY (Single-Precision A·X + Y) is a fundamental operation in linear algebra and scientific computing. This project:
- Implements SAXPY in C using a straightforward loop.
- Implements SAXPY in x86-64 assembly, leveraging SSE instructions for optimized performance.
- Compares execution times of the two implementations on varying vector sizes.
- Validates correctness by comparing results.

---

## **Requirements**
- **Compiler**: GCC or a compatible C compiler.
- **Assembler**: NASM for x86-64 assembly.
- **CPU**: x86-64 architecture with support for SSE instructions.
- **OS**: Any OS supporting aligned memory allocation.

---

## **How to Run**

1. Clone this repository:
   ```bash
   git clone https://github.com/your-repo/saxpy-c-vs-asm.git
   cd saxpy-c-vs-asm
