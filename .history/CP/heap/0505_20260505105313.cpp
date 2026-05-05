#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void bfs(vector<vector<int,int>>&grid , int i , int j){
    queue<int>row;
    queue<int>col;
    row.push(i);
    col.push(j);

    while(!row)

}


int main(){
    int n;
    cin>>n;
    vector<vector<int ,int>> grid(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cin>>grid[i][j];
        }
    }


    
}