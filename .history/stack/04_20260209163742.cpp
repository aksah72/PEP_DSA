#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s = "Hello how are you?";
    string word = "";
    stack<string> st;
    string rev

    for(int j = 0; j < s.size(); j++){
        if(s[j] != ' '){
            word += s[j];
        }
        else{
            st.push(word);
            word = "";
        }
    }

    if(word != "") st.push(word);

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}
