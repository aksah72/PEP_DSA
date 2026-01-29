#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5,4,3,2,8};
    for(int i = 1 ;i<5;i++){
        arr[i] += arr[i-1];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<
    }
}