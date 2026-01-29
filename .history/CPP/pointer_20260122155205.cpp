#include<iostream>
using namespace std;

int increment(int *x){
    int  i= *x;
    return ++i;
}

int main(){
    int a = 5;
    int *x = &a;

    cout<<increment();
}