#include<iostream>
#include<set>
#include<vector>
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




string removeDuplicates(string &s){
    vector<bool> visited(256,false);
    string result = "";
    for(char i : s){
        if(!visited[i]){
            result.push_back(i);
            vis
        }
    }
}