#include<iostream>
#include<vector>
using namespace std;

int linearsearch(int i , vector<int> &arr){
    for(int j=0;j<arr.size();j++){
        if (i==arr[j] ){
            if(i>5) return i*2;
            else return j/2;
        } 
    }
    return -1;
}
int main(){
    vector<int> arr = {3 , 1 ,6 ,4 ,2};
    int n = linearsearch(40,arr);
    cout<<n;
}