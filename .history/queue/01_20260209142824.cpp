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

    void push(int val){
        arr[rear] = val;
        rear++;
    }

};

int main(){

}

