#include <stdio.h>
#include <stdlib.h>
#define MAX 100   // Maximum size of rows/cols

// Function to multiply two matrices
void multiply(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX],
              int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int num, r[MAX], c[MAX];
    int matrices[10][MAX][MAX];   // Support up to 10 matrices
    int result[MAX][MAX], temp[MAX][MAX];

    printf("Enter number of matrices to multiply: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("Need at least 2 matrices.\n");
        return 0;
    }

    // Input matrices
    for (int m = 0; m < num; m++) {
        printf("\nMatrix %d:\n", m+1);
        printf("Enter rows and columns: ");
        scanf("%d %d", &r[m], &c[m]);

        printf("Enter elements:\n");
        for (int i = 0; i < r[m]; i++) {
            for (int j = 0; j < c[m]; j++) {
                scanf("%d", &matrices[m][i][j]);
            }
        }
    }

    // Check if multiplication is possible
    for (int i = 0; i < num - 1; i++) {
        if (c[i] != r[i+1]) {
            printf("Matrix %d columns (%d) != Matrix %d rows (%d). Multiplication not possible.\n",
                   i+1, c[i], i+2, r[i+1]);
            return 0;
        }
    }

    // Start with first matrix as result
    for (int i = 0; i < r[0]; i++)
        for (int j = 0; j < c[0]; j++)
            result[i][j] = matrices[0][i][j];

    int resRows = r[0], resCols = c[0];

    // Multiply sequentially
    for (int m = 1; m < num; m++) {
        multiply(result, matrices[m], temp, resRows, resCols, r[m], c[m]);

        // Update result
        resRows = resRows;
        resCols = c[m];
        for (int i = 0; i < resRows; i++)
            for (int j = 0; j < resCols; j++)
                result[i][j] = temp[i][j];
    }

    // Print final result
    printf("\nFinal Resultant Matrix:\n");
    for (int i = 0; i < resRows; i++) {
        for (int j = 0; j < resCols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}