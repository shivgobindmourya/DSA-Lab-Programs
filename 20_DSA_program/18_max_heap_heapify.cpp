// Author: Shiv Gobind, Roll No. 241517

/*
   Program 18:
   Program to build a max heap and perform heapify operation.
*/

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

int main() {
    int arr[] = {3, 5, 1, 10, 2, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    buildMaxHeap(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


