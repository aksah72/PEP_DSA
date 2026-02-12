#include<iostream>
using namespace std;

class MyQueue{
    public:
    int *arr;
    int size;
    int rear;
    int front;

    MyQueue(int size){
        this->size = size;
        arr = new int[size];
        rear = front = -1;
    }

    void enqueue(int val){
        if(rear == size-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        if(front == -1){
            front = 0;
        }
        rear++;
        arr[rear] = val;
    }

    void pop(){
        if(front<=rear)

    }

};

int main(){

}

