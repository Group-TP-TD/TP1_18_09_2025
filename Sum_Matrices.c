#include <stdio.h>
#include <stdlib.h>
#define MAX 100  //Maximum size of matrix

void addMatrices(int Result[MAX][MAX],int Temp[MAX][MAX],int rows,int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Result[i][j] += Temp[i][j]; // add directly to Result
        }
    }
}

int main() {
    int rows, cols, n;
    int Result[MAX][MAX] = {0}; // all start with 0s
    int Temp[MAX][MAX];

    //Ask for dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    //Ask how many matrices
    printf("Enter the number of matrices to sum: ");
    scanf("%d", &n);

    //Loop to input each matrix
    for (int k = 1; k <= n; k++) {
        printf("\nEnter elements of matrix %d:\n", k);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("M%d[%d][%d] = ", k, i, j);
                scanf("%d", &Temp[i][j]);
            }
        }
        //Add to result
        addMatrices(Result, Temp, rows, cols);
    }

    //Display result
    printf("\nSum of %d matrices:\n", n);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", Result[i][j]);
        }
        printf("\n");
    }
    return 0;
}