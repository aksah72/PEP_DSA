#include<iostream>
using namespace std;

int increment(int *x){
    int a = 
    return ++x;
}

int main(){
    int a = 5;
    int *x = &a;

    cout<<increment(&a);
}