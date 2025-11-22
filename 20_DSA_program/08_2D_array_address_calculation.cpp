// Author: Shiv Gobind, Roll No. 241517

/*
   Program 8:
   Program to calculate address of an element in a 2D array using row-major and column-major formulas.
*/

#include <stdio.h>

int main() {
    int base, i, j, M, N, size;

    printf("Enter Base Address of Array: ");
    scanf("%d", &base);

    printf("Enter number of Rows (M): ");
    scanf("%d", &M);

    printf("Enter number of Columns (N): ");
    scanf("%d", &N);

    printf("Enter Row Index (i): ");
    scanf("%d", &i);

    printf("Enter Column Index (j): ");
    scanf("%d", &j);

    size = sizeof(int); 

    int row_major = base + ((i * N) + j) * size;
    int col_major = base + ((j * M) + i) * size;

    printf("\nAddress using Row-Major: %d", row_major);
    printf("\nAddress using Column-Major: %d\n", col_major);

    return 0;
}


