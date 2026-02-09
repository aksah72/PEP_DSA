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
            cout<<"Not Valid Stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top == -1) return true;
        return false;
    }
};


int main(){
    MyStack st(5);
    st.push(1);
    st.push(2);
    cout<<st.isEmpty

}