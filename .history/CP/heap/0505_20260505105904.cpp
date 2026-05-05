#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void bfs(vector<vector<int,int>>&grid , int i , int j){
    queue<int>row;
    queue<int>col;
    row.push(i);
    col.push(j);

    while(!row.empty()){
        int r = row.front();
        int c = col.front();
        row.pop();
        col.pop();

        grid[r][c]=2;

        if(grid[r+1][c]==1){
            row.push(r+1);
            col.push(c);
        }
        if(grid[r-1][c]==1){
            row.push(r-1);
            col.push(c);
        }
        if(grid[r][c+1]==1){
            row.push(r);
            col.push(c+1);
        }
        if(grid[r][c-1]==1){
            row.push(r);
            col.push(c-1);
        } 

    }

}

int main(){
    int n;
    cin>>n;
    vector<vector<int ,int>> grid(n,n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cin>>grid[i][j];
        }
    }

    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){
                bfs(grid,i,j);
                ans++;
            }
        }
    }

    cout<<ans;
}