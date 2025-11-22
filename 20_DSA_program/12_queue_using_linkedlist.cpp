// Author: Shiv Gobind, Roll No. 241517

/*
   Program 12:
   Program to implement queue using linked list with dynamic memory allocation (C++).
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *frontPtr = nullptr, *rearPtr = nullptr;

void enqueue(int x) {
    Node* n = new Node;
    n->data = x;
    n->next = nullptr;

    if (rearPtr == nullptr) {
        frontPtr = rearPtr = n;
    } else {
        rearPtr->next = n;
        rearPtr = n;
    }
}

void dequeue() {
    if (frontPtr == nullptr) {
        cout << "Queue empty\n";
        return;
    }

    Node* temp = frontPtr;
    cout << "Dequeued: " << frontPtr->data << endl;

    frontPtr = frontPtr->next;
    if (frontPtr == nullptr) rearPtr = nullptr;

    delete temp;
}

void peek() {
    if (frontPtr == nullptr)
        cout << "Queue empty\n";
    else
        cout << "Front: " << frontPtr->data << endl;
}

void display() {
    if (frontPtr == nullptr) {
        cout << "Queue empty\n";
        return;
    }

    Node* t = frontPtr;
    cout << "Queue: ";
    while (t) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    peek();

    dequeue();
    display();

    dequeue();
    dequeue();
    display();

    return 0;
}


