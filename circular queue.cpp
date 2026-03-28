#include <iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int front, rear, size;

public:
    CircularQueue(int s) {
        size = s;
        arr = new int[size];
        front = rear = -1;
    }

    void enqueue(int data) {
        // FULL condition 
        if ((rear + 1) % size == front) {
            cout << "Queue is Full\n";
            return;
        }

        if (front == -1) { // first element ko lagi
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = data;
        cout << "Inserted " << data << endl;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Deleted " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1; // queue empty
        } else {
            front = (front + 1) % size;
        }
    }

    void getFront() {
        if (front == -1)
            cout << "Queue is Empty\n";
        else
            cout << "Front: " << arr[front] << endl;
    }

    void getBack() {
        if (rear == -1)
            cout << "Queue is Empty\n";
        else
            cout << "Rear: " << arr[rear] << endl;
    }

    void display() {
    if (front == -1) {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Queue elements: ";

    int i = front;
    while (true) {
        cout << arr[i] << " ";

        if (i == rear) break;

        i = (i + 1) % size; // op line
    }

    cout << endl;
}
};

int main() {
    CircularQueue q(4);

    q.enqueue(222);
    q.enqueue(23);
    q.enqueue(2131);
    q.getFront();
    q.getBack();

    q.dequeue();
    q.getBack();

    return 0;
}