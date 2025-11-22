// Author: Shiv Gobind, Roll No. 241517

/*
   Program 14:
   Program to create a singly linked list and perform insertion at beginning, middle, and end.
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
    Node* head;

public:
    LinkedList() { head = nullptr; }

    void insertBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }

    void insertMiddle(int value, int position) {
        Node* newNode = new Node(value);
        Node* temp = head;

        for (int i = 1; i < position && temp != nullptr; i++)
            temp = temp->next;

        if (temp == nullptr) {
            cout << "Position out of range!\n";
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    
    void display() {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    list.insertBeginning(30);
    list.insertBeginning(20);
    list.insertBeginning(10);

    cout << "After inserting at beginning:\n";
    list.display();

    list.insertMiddle(25, 2);  
    cout << "\nAfter inserting in middle:\n";
    list.display();

    list.insertEnd(40);
    cout << "\nAfter inserting at end:\n";
    list.display();

    return 0;
}



