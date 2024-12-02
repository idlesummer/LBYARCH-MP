//MARAMAG, NASH LUIS 
//MAUNAHAN, ALLIYAH BIANCA
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>  

// C implementation of SAXPY (A * X + Y = Z)
void saxpyc(float A, float X[], float Y[], float Z[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        Z[i] = A * X[i] + Y[i];  
    }
}

// Assembly function declaration
extern void saxpy(float A, float *X, float *Y, float *Z, int size);

int main() {
    int size;
    float A;

    // Get vector size from user
    printf("Enter the size of the vector: ");
    scanf("%d", &size);

    // Get scalar A from user
    printf("Enter the scalar value A: ");
    scanf("%f", &A);

    // Allocate memory for vectors X, Y, and Z
    float *X = (float *)malloc(size * sizeof(float));
    float *Y = (float *)malloc(size * sizeof(float));
    float *Z = (float *)malloc(size * sizeof(float));

    if (X == NULL || Y == NULL || Z == NULL) {
        printf("Memory allocation failed.\n");
        free(X);
        free(Y);
        free(Z);
        return 1;
    }

    // Generate random values for X and Y
    int i;
    for (i = 0; i < size; i++) {
        X[i] = (float)(rand() % 100) / 10.0f;  
        Y[i] = (float)(rand() % 100) / 10.0f;  
    }

    // Print first 10 elements of vectors X and Y
    printf("\nVector X (first 10):");
    for (i = 0; i < 10 && i < size; i++) {
        printf("%.2f", X[i]);
    }

    printf("\nVector Y (first 10): ");
    for (i = 0; i < 10 && i < size; i++) {
        printf("%.2f", Y[i]);
    }
    
    printf("\n");

    clock_t start_c = clock();  // Start timer
    saxpyc(A, X, Y, Z, size);
    clock_t end_c = clock();  // End timer
    double time_c = ((double)(end_c - start_c) / CLOCKS_PER_SEC) * 1000;  // Calculate time in milliseconds
    printf("\nTime taken for SAXPY (C): %.5f ms", time_c);

    // Print the results for SAXPY (C version)
    printf("\nVector Z (C): ");
    for (i = 0; i < 10 && i < size; i++) {
        printf("%.2f ", Z[i]);
    }
    printf("\n");

   	clock_t start_asm = clock();  // Start timer
    saxpy(A, X, Y, Z, size);
    clock_t end_asm = clock();  // End timer
    double time_asm = ((double)(end_asm - start_asm) / CLOCKS_PER_SEC) * 1000;  // Calculate time in milliseconds
    printf("\nTime taken for SAXPY (ASM): %.5f ", time_asm);

    // Print the results for SAXPY (assembly version)
    printf("\nVector Z (ASM): ");
    for (i = 0; i < 10 && i < size; i++) {
        printf("%.2f ", Z[i]);
    }
    printf("\n");

    // Free allocated memory
    free(X);
    free(Y);
    free(Z);

    return 0;
}

