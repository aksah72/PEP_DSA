#include<iostream>
using namespace std;
void even(int n){
    if(n<=0) return 0;
    if(n%2==0){
        cout<<n<<" ";
        even(n-2);
    }
    even(n-1);
}

int main(){
    int a = even(20);
    return 0;
}