// Author: Shiv Gobind, Roll No. 241517

/*
   Program 13:
   Program to implement queue using two stacks.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int s1[MAX], s2[MAX];
int top1 = -1, top2 = -1;

void push1(int x) { s1[++top1] = x; }
int pop1() { return s1[top1--]; }

void push2(int x) { s2[++top2] = x; }
int pop2() { return s2[top2--]; }

void enqueue(int x) {
    push1(x);
    printf("Enqueued: %d\n", x);
}

int dequeue() {
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty!\n");
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
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue: ");
    for (int i = top2; i >= 0; i--)
        printf("%d ", s2[i]);
    for (int i = 0; i <= top1; i++)
        printf("%d ", s1[i]);
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    printf("Dequeued: %d\n", dequeue());

    display();

    return 0;
}



