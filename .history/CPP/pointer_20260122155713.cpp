#include<iostream>
using namespace std;

int increment(int *x){
    
    return (++x);
}

int main(){
    int a = 5;

    cout<<increment(&a)<<endl;
    cout<<a;
}