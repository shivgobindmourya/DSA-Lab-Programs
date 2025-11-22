// Author: Shiv Gobind, Roll No. 241517

/*
   Program 19:
   Program to represent a graph using adjacency matrix.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, e, u, v;
    cout << "Enter number of vertices: ";
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n, 0));

    cout << "Enter number of edges: ";
    cin >> e;

    for(int i = 0; i < e; i++) {
        cout << "Enter edge (u v): ";
        cin >> u >> v;
        a[u][v] = 1;  
        a[v][u] = 1;  // Remove this line for directed graph
    }

    cout << "Adjacency Matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}



