// Author: Shiv Gobind, Roll No. 241517

/*
   Program 12:
   Program to implement queue using linked list with dynamic memory allocation.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int x) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = x;
    n->next = NULL;
    if (rear == NULL) front = rear = n;
    else rear->next = n, rear = n;
}

void dequeue() {
    if (front == NULL) {
        printf("Queue empty\n");
        return;
    }
    struct Node* temp = front;
    printf("Dequeued: %d\n", front->data);
    front = front->next;
    if (front == NULL) rear = NULL;
    free(temp);
}

void peek() {
    if (front == NULL) printf("Queue empty\n");
    else printf("Front: %d\n", front->data);
}

void display() {
    if (front == NULL) {
        printf("Queue empty\n");
        return;
    }
    struct Node* t = front;
    printf("Queue: ");
    while (t) printf("%d ", t->data), t = t->next;
    printf("\n");
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


