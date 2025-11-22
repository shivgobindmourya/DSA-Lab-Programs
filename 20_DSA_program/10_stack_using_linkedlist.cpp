// Author: Shiv Gobind, Roll No. 241517

/*
   Program 10:
   Program to implement stack using linked list with dynamic memory allocation.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int x) {
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    if (!n) { printf("Overflow!\n"); return; }
    n->data = x;
    n->next = top;
    top = n;
    printf("%d pushed.\n", x);
}

void pop() {
    if (top == NULL) {
        printf("Underflow!\n");
        return;
    }
    struct Node *temp = top;
    printf("Popped: %d\n", top->data);
    top = top->next;
    free(temp);
}

void display() {
    struct Node *t = top;
    if (!t) { printf("Stack empty.\n"); return; }
    printf("Stack: ");
    while (t) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int main() {
    int ch, val;
    while (1) {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\nEnter: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1: printf("Enter value: "); scanf("%d", &val); push(val); break;
        case 2: pop(); break;
        case 3: display(); break;
        case 4: exit(0);
        default: printf("Invalid!\n");
        }
    }
}


