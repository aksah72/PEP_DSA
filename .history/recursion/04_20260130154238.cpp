#include<iostream>
using namespace std;

int fib(int n){
    if(n==0)
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}

int main(){
    int a = fib(5);
    cout<<a;
    return 0;
}