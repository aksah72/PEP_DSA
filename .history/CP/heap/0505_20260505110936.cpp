#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void bfs(vector<vector<int>>& grid, int i, int j, int n){
    queue<pair<int,int>> q;
    q.push({i,j});
    grid[i][j] = 2;

    int dr[4] = {1,-1,0,0};
    int dc[4] = {0,0,1,-1};

    while(!q.empty()){
        auto it = q.front();
        q.pop();

        int r = it.first;
        int c = it.second;

        for(int k=0;k<4;k++){
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr>=0 && nc>=0 && nr<n && nc<n && grid[nr][nc]==1){
                grid[nr][nc] = 2;
                q.push({nr,nc});
            }
        }
    }
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> grid(n, vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j] == 1){
                bfs(grid, i, j, n);
                ans++;
            }
        }
    }

    cout<<ans;
}