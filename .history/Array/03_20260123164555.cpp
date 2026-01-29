#include<iostream>
#include<vector>
using namespace std;

int binary(int key , vector<int> &arr){
    int n = arr.size();
    int start = 0;
    int last = n-1;
    int mid = (start+last)/2;
    while(start<=last){
        mid = (start+last)/2;
        if(arr[mid] == key) return mid;
        if(arr[mid] < key) start = mid+1;
        if(arr[mid] > key) last = mid-1;
    }
    return mid;
}
int main(){
    vector<int> arr = {1,2,4,6,8,9,11,12,15,17,20};
    cout<<binary(15,arr);
}














