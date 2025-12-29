#include <iostream>
using namespace std;

class CircularQueue{
    
    int* arr;
    int front;
    int rear;
    int size;

    public:
    CircularQueue(int s){
        size=s;
        arr=new int[size];
        front =-1;
        rear=-1;
    }
    void enqueue(int data){

        if(front==-1){//suru ko data ko lagi
            rear=0;
            front=0;
            arr[rear]=data;
        }
        else{
            rear=(rear+1)%size;
        }
        if(front==(rear+1)%size){
            cout<<"The queue is full";
            return;
        }

            arr[rear]=data;
            cout<<"Inserted "<<data<<endl;


    }
    void dequeue(){
            front=(front+1)%size;


        if(front>rear){
            cout<<"The queue is underflow";
            front=-1;
            rear=-1;
            return;

        }
        

    }
    void getFront(){
        cout<<"the front data is "<<arr[front]<<endl;
    }
    void getBack(){
        cout<<"the rear data is "<<arr[rear]<<endl;

    }
    
};

    int main(){
    
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