#include<iostream>
#include<vector>
using namespace std;

int binary(int key , vector<int> &arr){
    int n = arr.size();
    int start = 0;
    int last = n-1;
    
    while(mid<=last && mid>=start){
        if(arr[mid] == key) return mid;
        if(arr[mid] < key){
            start = mid+1;
        }
        if(arr[mid] > key)
    }
}
int main(){

}