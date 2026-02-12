#include<iostream>
#include<stack>
using namespace std;

string reverse(string d){
    int i =0 , j= d.size()-1;
    while()
}

int main(){
    string s = "Hello how are you?";
    string word = "";
    stack<string> st;

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
