#include<iostream>
using namespace std;

class MyStack{
    public:
    int *arr;
    int top;
    int size;
    MyStack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int val){
        if(top == size-1) {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop(){
        if(top == -1) {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else top--;
    }
    int peek(){
        if(top == -1 || top == size-1){
            cout<<"Not Valid Stack"<<end;
            return;
        }
        return arr[top];
    }
};


int main(){
    
}