# **Comparative Analysis: Assembly vs C Performance**

This document presents the comparative execution time and a brief performance analysis of the SAXPY operation (`A * X + Y = Z`) implemented in both C and x86-64 assembly.

---

## **Overview**
- **C** is a higher-level programming language that provides portability and abstraction from the hardware.
- **Assembly** is a low-level programming language that interacts directly with the hardware, offering more control over how operations are executed.

---

## **Links**
- [Youtube Video Demo](https://youtu.be/MI1Lojmh7V0)
- [Google Sheets](https://docs.google.com/spreadsheets/d/1RmcmYTp1j9W37Lek3_fiPVRrQwVgZs-oP7rN8UH9siE/edit?gid=0#gid=0)

---
## **Sample Output**
![image](https://github.com/user-attachments/assets/d812c01f-38a9-4b40-922c-cff83241aaa4)

This is the sample output for a size of 2^20. The program displays the first 10 values of each X and Y vectors, as well as for its resulting Z vector. The outputs and the execution time for both the SAXPY in C and in ASM are printed, and through that they can serve as a correctness check for each other.

---

## **Execution Time Comparison**

| **Vector Size** | **Average Time in C** | **Average in ASM** |
|-----------------|-----------------------|--------------------|
| 2^20            | 2.23ms                | 0.86ms             |
| 2^24            | 39.73ms               | 15.23ms            |
| 2^29            | 40164ms               | 31954ms            |

---

## **Performance Analysis**

### **Observations**
1. **Small Vector Sizes:**
   - The performance difference between the C and assembly implementations is minimal.
   - Computation time is not too significant to dominate the cost of overhead.

2. **Large Vector Sizes:**
   - Assembly shows significant performance gains over C.

### **Advantages of Assembly Implementation**
- **Lower Overhead:**  
  Assembly eliminates high-level language overhead, making it suitable for computationally intensive tasks.

### **Advantages of C Implementation**
- **Ease of Use:**  
  C code is simpler to write, read, and maintain compared to assembly.
- **Portability:**  
  C can run on any architecture with a compatible compiler, unlike assembly, which is architecture-specific.

---

## **Conclusion**
While the C implementation is ideal for general use cases due to its simplicity, portability, and maintainability, the assembly implementation excels in scenarios requiring high performance for computationally intensive tasks. Typically, assembly is best suited for writing optimized helper functions rather than entire programs. As demonstrated in this example, the SAXPY function is implemented in assembly for performance but is imported and executed within the C program, combining the strengths of both languages.
