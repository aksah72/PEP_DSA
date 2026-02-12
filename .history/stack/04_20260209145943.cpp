#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s = "Hello how are yuo?";
    string word = "";
    stack<string> st;
    int i = 0 , j=0;
    while(i<s.size()){
        
    }
    while(s[j]!=' '){
        while(isalnum(s[i])) i++;
        j++;
    }
    word = s.substr(i,j);
    st.push(word);


}