#include<iostream>
#include<vector>
using namespace std;

int binary(int key , vector<int> &arr){
    int n = arr.size();
    int start = 0;
    int last = n-1;
    int mid = (start+last)/2;
    while(start<last){
        mid = (start+last)/2;
        if(arr[mid] == key) return mid;
        if(arr[mid] < key){
            start = mid+1;
        }
        if(arr[mid] > key) last = mid-1;
    }
    return mid;
}
int main(){
    vector<int> arr = {1 ,2,3,4,5,6,7,8};
    cout<<binary(5)
}