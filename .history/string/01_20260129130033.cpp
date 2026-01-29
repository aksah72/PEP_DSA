#include<iostream>
using namespace std;

bool palindrome(string s){
    string str = s;
    int i = 0 , j = s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

int main(){
    string str = "hello";
    
    cout<<str;
}
