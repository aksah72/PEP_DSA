//check array is sorted or not

/*#include<iostream>
using namespace std;

bool issorted(int arr[] , int size){
    if(size==0 || size ==1) return true;
    if(arr[0]>arr[1]) return false;
    return issorted(arr+1,size-1);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,10,9};
    cout<<issorted(arr,10);
    return 0;
}


//find sum of all the elements of array

#include<iostream>
using namespace std;

int sum(int arr[] , int size){
    if(size==0 || size ==1) return arr[0];
    return  arr[0] + sum(arr+1,size-1);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<sum(arr,10)<<endl;
    return 0;
}
*/


//find target is present in array or not

#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int size,int target){
    if(size==0 ) return false;
    if(arr[0]==target) return true;
    return  linearSearch(arr+1,size-1,target);
}

int main(){
    int arr[10] = {12,52,87,89,412,548,5496,50,39,59};
    cout<<linearSearch(arr,10,59)<<endl;
    return 0;
}























