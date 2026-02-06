#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    int n = st.size();
    cout<<n;
    for(int i =0;i<n;i++){
        cout<<st.top()<<endl;
        st.pop();
    }
}