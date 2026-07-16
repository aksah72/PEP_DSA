class Solution {
public:
    void dfs(vector<vector<int>>&adj , vector<int>&vis , int node){
        vis[node] = 1;

        for(int i : adj[node]){
            if(!vis[i]) dfs(adj,vis,i);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>>adj(isConnected.size());

        int n = isConnected.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int>vis(n);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(adj,vis,i);
            }
        }
        return ans;
    }
};