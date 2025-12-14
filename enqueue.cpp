#include <iostream>
using namespace std;

class Queue{
    
    int* arr;
    int front;
    int rare;
    int size;

    public:
    
    Queue(int s){
        size=s;
        arr=new int[size];
        front =0;
        rare=-1;
    }
    void enqueue(int data){
    rare++;
    arr[rare]=data;
}
    void dequeue(){
    front++;
}

    void display(){
    for(int i=front;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
};

    int main(){
    
    Queue q(4);
    q.enqueue(12);
    q.enqueue(23);
    q.enqueue(2131);
    q.display();
    q.dequeue();
    q.display();
    return 0;
    
}