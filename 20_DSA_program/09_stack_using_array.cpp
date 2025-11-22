// Author: Shiv Gobind, Roll No. 241517

/*
   Program 9:
   Program to implement stack using arrays with push, pop, peek, and display operations.
*/

#include <iostream>
using namespace std;

#define MAX 5   // maximum size of stack

int stackArr[MAX];
int top = -1;

// Function to push
void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot push " << value << endl;
    } else {
        top++;
        stackArr[top] = value;
        cout << value << " pushed into stack" << endl;
    }
}

// Function to pop
void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Nothing to pop" << endl;
    } else {
        cout << stackArr[top] << " popped from stack" << endl;
        top--;
    }
}

// Function to get top element
void peek() {
    if (top == -1) {
        cout << "Stack is empty! No top element" << endl;
    } else {
        cout << "Top element = " << stackArr[top] << endl;
    }
}

// Function to display stack
void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting program..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Try again" << endl;
        }
    }

    return 0;
}


