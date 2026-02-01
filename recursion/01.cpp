#include<iostream>
using namespace std;
void even(int n){
    if(n<=0) return ;
    if(n%2==0){
        cout<<n<<" ";
        even(n-2);
    }else even(n-1);
}

int main(){
    even(20);
    return 0;
}