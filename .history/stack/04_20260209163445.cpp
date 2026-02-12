#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s = "Hello how are you?";
    string word = "";
    stack<string> st;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ')
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}