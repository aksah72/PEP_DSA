#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter String : ";
    cin>>s;
    cout<<"Enter no of unique char : ";
    int k;
    cin>>k;
    string str="";
    int cnt=0;
    vector<bool> visit(26,false);
    for(int i=0;i<s.size();i++){
        if(visit[s[i]-'a']){
            str
        }
        if(!visit[s[i]-'a'] && cnt<k){
            str += s[i];
            visit[s[i]-'a'] = true;
        }
    }
}