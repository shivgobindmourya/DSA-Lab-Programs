// Author: Shiv Gobind, Roll No. 241517

/*
   Program 16:
   Program to create a binary tree using array representation in C++.
*/

#include <iostream>
using namespace std;

#define MAX 15

int tree[MAX];

void initTree() {
    for (int i = 0; i < MAX; i++) {
        tree[i] = -1;
    }
}

void setRoot(int key) {
    if (tree[0] == -1)
        tree[0] = key;
}

void setLeft(int key, int parentIndex) {
    int leftIndex = 2 * parentIndex + 1;
    if (parentIndex < MAX && tree[parentIndex] != -1 && leftIndex < MAX)
        tree[leftIndex] = key;
}

void setRight(int key, int parentIndex) {
    int rightIndex = 2 * parentIndex + 2;
    if (parentIndex < MAX && tree[parentIndex] != -1 && rightIndex < MAX)
        tree[rightIndex] = key;
}

void printTree() {
    cout << "\nArray representation of Binary Tree:\n";
    for (int i = 0; i < MAX; i++) {
        if (tree[i] != -1)
            cout << "Index " << i << " : " << tree[i] << endl;
        else
            cout << "Index " << i << " : - (empty)\n";
    }
}

int main() {
    initTree();

    setRoot(10);
    setLeft(20, 0);
    setRight(30, 0);
    setLeft(40, 1);
    setRight(50, 1);
    setRight(60, 2);

    printTree();

    return 0;
}


