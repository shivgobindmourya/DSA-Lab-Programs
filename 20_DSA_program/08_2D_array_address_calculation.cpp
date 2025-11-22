// Author: Shiv Gobind, Roll No. 241517

/*
   Program 8:
   Program to calculate address of an element in a 2D array using 
   row-major and column-major formulas.
*/

#include <iostream>
using namespace std;

int main() {
    int base, i, j, M, N, size;

    cout << "Enter Base Address of Array: ";
    cin >> base;

    cout << "Enter number of Rows (M): ";
    cin >> M;

    cout << "Enter number of Columns (N): ";
    cin >> N;

    cout << "Enter Row Index (i): ";
    cin >> i;

    cout << "Enter Column Index (j): ";
    cin >> j;

    size = sizeof(int); 

    int row_major = base + ((i * N) + j) * size;
    int col_major = base + ((j * M) + i) * size;

    cout << "\nAddress using Row-Major: " << row_major;
    cout << "\nAddress using Column-Major: " << col_major << endl;

    return 0;
}




