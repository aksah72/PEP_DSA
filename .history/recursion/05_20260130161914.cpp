#include<iostream>
using namespace std;

bool issorted(int arr[] , int size){
    if(size==0 || size ==1) return true;
    if(arr[0]>arr[1]) return false;
    issorted(arr+1,size);
}

int main(){
    cout<<issorted()
}