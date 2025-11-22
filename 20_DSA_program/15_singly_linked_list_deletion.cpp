// Author: Shiv Gobind, Roll No. 241517

/*
   Program 15:
   Program to delete a node from a singly linked list by value or position.
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    // Insert at end
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }

    // Delete node by position (1-based index)
    void deleteByPosition(int pos) {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        if (pos == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node at position 1.\n";
            return;
        }

        Node* temp = head;
        for (int i = 1; temp != NULL && i < pos - 1; i++)
            temp = temp->next;

        if (temp == NULL || temp->next == NULL) {
            cout << "Invalid position.\n";
            return;
        }

        Node* del = temp->next;
        temp->next = del->next;
        delete del;
        cout << "Deleted node at position " << pos << ".\n";
    }

    // Display linked list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Initial List:\n";
    list.display();

    list.deleteByPosition(3);
    cout << "After deleting position 3:\n";
    list.display();

    return 0;
}




