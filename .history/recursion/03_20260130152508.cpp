#include<iostream>
using namespace std;
int p = 1;
int power(int x , int n){
    if(n==1) return x;
    p *= power(x)
}
int main(){
    int a = power(2,3);
    cout<<a;
    return 0;
}