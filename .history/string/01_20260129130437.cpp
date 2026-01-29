#include<iostream>
using namespace std;

void palindrome(string s){
    string str = s.to_Lower();
    int i = 0 , j = s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    if(str==s) cout<<"true";
    else cout<<"false";
}

int main(){
    string str = "Naman";
    
    palindrome(str);
}
