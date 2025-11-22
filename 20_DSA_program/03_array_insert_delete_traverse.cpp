// Author: Shiv Gobind, Roll No. 241517

/*
   Program 3:
   Program to insert, delete, and traverse elements in a one-dimensional array.
*/

#include <iostream>
using namespace std;

void traverse(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int insertElement(int arr[], int n, int pos, int value) {
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid Position!" << endl;
        return n;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    cout << "Inserted successfully.\n";
    return n + 1;
}

int deleteElement(int arr[], int n, int pos) {
    if (pos < 1 || pos > n) {
        cout << "Invalid Position!" << endl;
        return n;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Deleted successfully.\n";
    return n - 1;
}

int main() {
    int arr[100], n, choice, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Traverse\n";
        cout << "2. Insert\n";
        cout << "3. Delete\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            traverse(arr, n);
            break;

        case 2:
            cout << "Enter position to insert (1-based): ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;
            n = insertElement(arr, n, pos, value);
            break;

        case 3:
            cout << "Enter position to delete (1-based): ";
            cin >> pos;
            n = deleteElement(arr, n, pos);
            break;

        case 4:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}


