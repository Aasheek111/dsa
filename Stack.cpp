#include <iostream>
using namespace std;

class Stack
{

    int top;
    int arr[100];

public:
    Stack()
    {
        top = -1;
    }

    void push(int data)
    {
        if (top == 99)
        {
            cout << "The stack is full";
            return;
        }
        top++;
        arr[top] = data;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "The stack is mt";
            return 1;
        }
        return arr[top--];
    }
    void peek()
    {
        cout << "The top value is " << arr[top]<<endl;
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{

    Stack s1;
    s1.push(12);
    s1.push(15);
    s1.push(13);

    s1.pop();
    s1.peek();
    s1.display();
    return 0;
}