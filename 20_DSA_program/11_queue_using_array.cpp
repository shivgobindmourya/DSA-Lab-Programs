// Author: Shiv Gobind, Roll No. 241517

/*
   Program 11:
   Program to implement queue using arrays with enqueue, dequeue, peek, and display.
*/

#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;


void enqueue(int x) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert %d\n", x);
    } else {
        if (front == -1) front = 0;
        rear++;
        queue[rear] = x;
        printf("%d inserted into the queue.\n", x);
    }
}


void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Nothing to delete.\n");
    } else {
        printf("%d deleted from the queue.\n", queue[front]);
        front++;
    }
}


void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! Nothing to peek.\n");
    } else {
        printf("Front element = %d\n", queue[front]);
    }
}


void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
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



