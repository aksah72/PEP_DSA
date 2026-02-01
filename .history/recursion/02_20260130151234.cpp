#include<iostream>
using namespace std;
int p = 1;
int factorial(int n){
    if(n == 0) return 1;
    if(n == 1) return p;
    return n
}
int main(){
    cout<<factorial(5);
    return 0;
}