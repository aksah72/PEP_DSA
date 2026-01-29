#include<iostream>
#include<set>
using namespace std;

int main(){
    string str = "banana";
    set<char> s;
    for(int i = 0;i<str.size();i++){
        s.insert(str[i]);

    }
    for(auto &i : s){
        cout<<i;
    }
}




string removeDuplicates