//Design queue using stacks

#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    stack<int>st2;
    while(!st.empty()){
        int a = st.top();
        st2.push(a);
        st.pop();
    }
    while(!st2.empty()){
        int a = st2.top();
        cout<<a<<" ";
        st2.pop();
    }
    return 0;

}