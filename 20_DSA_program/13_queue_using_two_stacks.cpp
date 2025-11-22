// Author: Shiv Gobind, Roll No. 241517

/*
   Program 13:
   Program to implement queue using two stacks.
*/

#include <iostream>
using namespace std;

int s1[100], s2[100];
int top1 = -1, top2 = -1;

void push1(int x) { 
    s1[++top1] = x; 
}

int pop1() { 
    return s1[top1--]; 
}

void push2(int x) { 
    s2[++top2] = x; 
}

int pop2() { 
    return s2[top2--]; 
}

void enqueue(int x) {
    push1(x);
    cout << "Enqueued: " << x << endl;
}

int dequeue() {
    if (top1 == -1 && top2 == -1) {
        cout << "Queue is empty!" << endl;
        return -1;
    }

    if (top2 == -1) {
        while (top1 != -1)
            push2(pop1());
    }

    return pop2();
}

void display() {
    if (top1 == -1 && top2 == -1) {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "Queue: ";
    for (int i = top2; i >= 0; i--)
        cout << s2[i] << " ";

    for (int i = 0; i <= top1; i++)
        cout << s1[i] << " ";

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    cout << "Dequeued: " << dequeue() << endl;

    display();

    return 0;
}



