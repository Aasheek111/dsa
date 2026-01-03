#include <iostream>
using namespace std;

// we will do insert in front, last and at middle and delete
struct Node
{
    int data;
    Node *next;
};

class Linkedlist
{

    Node *head;

public:
    Linkedlist()
    {
        head = NULL;
    }

    void insertFront(int data)
    {
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = head;
        head = newnode;
    }
    void insertBack(int data)
    {

        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = NULL;
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    // this inserts the data aftet the pos
    // pos means index
    void insertMid(int data, int pos)
    {
        Node *newnode = new Node();
        newnode->data = data;
        Node *temp = head;

        for (int i = 0; i < pos && temp != NULL; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    void display()
    {
        Node *tempnode = head;
        while (tempnode->next != NULL)
        {
            cout << tempnode->data << endl;
            tempnode = tempnode->next;
        }
    }
};
int main()
{

    Linkedlist l1;
    l1.insertFront(12);
    l1.insertFront(14);
    l1.insertFront(15);
    l1.display();
}
