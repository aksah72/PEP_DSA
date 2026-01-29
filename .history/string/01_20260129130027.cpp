#include<iostream>
using namespace std;

bool palindrome(string s){
    string str = 
    int i = 0 , j = s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

int main(){
    string str = "Hello";
    
    cout<<str;
}
