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



#include<iostream>
using namespace std;

bool find(int arr[] , int size,int target){
    if(size==0 ) return false;
    if(arr[0]==target) return true;
    return  find(arr+1,size-1,target);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<find(arr,10,9)<<endl;
    return 0;
}























