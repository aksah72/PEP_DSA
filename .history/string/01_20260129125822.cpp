#include<iostream>
using namespace std;

int main(){
    string str = "Hello";
    int i = 0 , j = str.size()-1;
    while(i<j){
        swap(str[i]+'0',str[j]+'0');
        i++;
        j--;
    }
    cout<<str;
}