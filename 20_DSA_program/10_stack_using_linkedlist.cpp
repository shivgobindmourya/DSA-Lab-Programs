// Author: Shiv Gobind, Roll No. 241517

/*
   Program 10:
   Program to implement stack using linked list with dynamic memory allocation.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *topNode = nullptr;

void push(int x) {
    Node *n = new(nothrow) Node;
    if (!n) {
        cout << "Overflow!\n";
        return;
    }
    n->data = x;
    n->next = topNode;
    topNode = n;
    cout << x << " pushed.\n";
}

void pop() {
    if (topNode == nullptr) {
        cout << "Underflow!\n";
        return;
    }
    Node *temp = topNode;
    cout << "Popped: " << topNode->data << endl;
    topNode = topNode->next;
    delete temp;
}

void display() {
    if (topNode == nullptr) {
        cout << "Stack empty.\n";
        return;
    }

    cout << "Stack: ";
    Node *t = topNode;
    while (t != nullptr) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main() {
    int ch, val;

    while (true) {
        cout << "\n1.Push  2.Pop  3.Display  4.Exit\nEnter: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid!\n";
        }
    }
}



