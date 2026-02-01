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
*/

#include<iostream>
using namespace std;
int vec[10];

int sum(int arr[] , int size){
    if(size==0 || size ==1) return arr[0];
    return  vec[size] = arr[0] ^ sum(arr+1,size-1);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,10,9};
    cout<<sum(arr,10)<<endl;
    for(int i : vec){
        cout<<i<<" ";
    }
    return 0;
}