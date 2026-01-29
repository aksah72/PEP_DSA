#include<iostream>
using namespace std;

int increment(int *x){
    int a = *x;
    return ++a;
}

int main(){
    int a = 5;
    int *x = &a;

    cout<<increment(&a);
}