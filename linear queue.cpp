#include <iostream>
using namespace std;

class Queue{
    
    int* arr;
    int front;
    int rear;
    int size;

    public:
    Queue(int s){
        size=s;
        arr=new int[size];
        front =-1;
        rear=-1;
    }

    void enqueue(int data){

        if(rear==-1&&front==-1){
            rear=0;
            front=0;
            arr[rear]=data;
            cout<<data<<" inserted in index "<<rear<<endl;
            

        }
        else if(rear+1==size){
            cout<<"The queue is full";

        }
        else  {
            rear++;
            arr[rear]=data;
            cout<<data<<" inserted in index "<<rear<<endl;

        }
        

}
    void dequeue(){

        if(rear==-1&& front==-1){
            cout<<"THe queue is underflow";
        }
        else {
            front++;
        }
}

    void display(){
    for(int i=front;i<rear;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
};

    int main(){
    
    Queue q(4);
    q.enqueue(222);
    q.enqueue(23);
    q.enqueue(2131);
    q.display();
    q.dequeue();
    q.display();
    return 0;
    
}