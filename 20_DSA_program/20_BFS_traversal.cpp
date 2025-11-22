// Author: Shiv Gobind, Roll No. 241517

/*
   Program 20:
   Program to perform Breadth-First Search (BFS) traversal of a graph.
*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(int start, vector<vector<int>>& adj, int n) {
    vector<int> visited(n, 0);
    queue<int> q;
    visited[start] = 1;
    q.push(start);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v : adj[u]) {
            if(!visited[v]) {
                visited[v] = 1;
                q.push(v);
            }
        }
    }
}

int main() {
    int n = 6;
    vector<vector<int>> adj(n);
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 4};
    adj[3] = {1, 5};
    adj[4] = {1, 2, 5};
    adj[5] = {3, 4};
    bfs(0, adj, n);
}


