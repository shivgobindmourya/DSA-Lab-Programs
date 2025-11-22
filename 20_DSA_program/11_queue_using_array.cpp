// Author: Shiv Gobind, Roll No. 241517

/*
   Program 11:
   Program to implement queue using arrays with enqueue, dequeue, peek, and display.
*/

#include <iostream>
using namespace std;

#define MAX 5

int queueArr[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        cout << "Queue Overflow! Cannot insert " << x << endl;
    } else {
        if (front == -1) front = 0;
        rear++;
        queueArr[rear] = x;
        cout << x << " inserted into the queue." << endl;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! Nothing to delete." << endl;
    } else {
        cout << queueArr[front] << " deleted from the queue." << endl;
        front++;
    }
}

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty! Nothing to peek." << endl;
    } else {
        cout << "Front element = " << queueArr[front] << endl;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queueArr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    peek();

    enqueue(40);
    enqueue(50);
    enqueue(60); 

    display();

    return 0;
}



