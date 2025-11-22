// Author: Shiv Gobind, Roll No. 241517

/*
   Program 19:
   Program to represent a graph using adjacency matrix.
*/

#include <stdio.h>

int main() {
    int n, e, u, v;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=0;

    printf("Enter number of edges: ");
    scanf("%d", &e);

    for(int i=0;i<e;i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        a[u][v] = 1;
        a[v][u] = 1;
    }

    printf("Adjacency Matrix:\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}



