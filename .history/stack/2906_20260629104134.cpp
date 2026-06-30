//Design queue using stacks

#include<iostream>
#include<stacks>

using namespace std;

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    stack<int>st2;
    while(!st.isEmpty()){
        int a = st.top();
        st2.push(a);
        st.pop();
    }
    while(!st.isEmpty()){
        int a = st2.top();
        cout<<a<<" ";
        st2.pop();
    }

    return 0;

}