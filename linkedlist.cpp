#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

class Linkedlist {
    Node *head;

public:
    Linkedlist() {
        head = NULL;
    }

    void insertAtBeginning(int data) {
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = head;
        head = newnode;
    }

    void insertAtLast(int data) {
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            return;
        }

        Node *tempnode = head;
        while (tempnode->next != NULL) {
            tempnode = tempnode->next;
        }

        tempnode->next = newnode;
    }

    void deleteBeginning() {
        if (head == NULL) return;

        Node *tempnode = head;
        head = head->next;
        delete tempnode;
    }

    void deleteLast() {
        if (head == NULL) return;

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node *tempnode = head;
        while (tempnode->next->next != NULL) {
            tempnode = tempnode->next;
        }

        delete tempnode->next;
        tempnode->next = NULL;
    }

    void display() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    Linkedlist l1;

    l1.insertAtBeginning(12);
    l1.insertAtLast(23);
    l1.insertAtLast(50);

    l1.deleteBeginning();

    l1.display();

    return 0;
}