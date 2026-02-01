#include<iostream>
using namespace std;

bool issorted(int arr[] , int size){
    if(size==0 || size ==1) return true;
    if(arr[0]>arr[1]) return false;
    return issorted(arr+1,size);
}

int main(){
    int arr[10] = {1,2,3,4,8,7,6,5,4,4};
    cout<<issorted(arr,10);
    return 0;
}