#include<iostream>
#include<vector>

using namespace std;
int main(){

    int n;
    cin>>n;
    vector<vector<int>> adj(n);
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(auto &i : adj){
        for(int j : i){
            cout
        }
    }
}