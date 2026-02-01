#include<iostream>
using namespace std;
int even(int n){
    if(n==0) return 0;
    if(n%2==0){
        cout<<n<<" ";
        even(n-2);
    }
    else even(n-1);
}
int main(){
    return 0;
    even
}