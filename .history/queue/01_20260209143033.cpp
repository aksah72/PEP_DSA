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
        arr[rear] = val;
        rear++;
    }

    void pop(){
        front++;

    }

};

int main(){

}

