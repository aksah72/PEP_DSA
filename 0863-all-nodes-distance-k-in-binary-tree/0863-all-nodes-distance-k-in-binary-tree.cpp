/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool path1(TreeNode* root,TreeNode* target,vector<TreeNode*>&path){
        if(!root) return false;
        path.push_back(root);
        if(root==target) return true;
        if(path1(root->left,target,path) || path1(root->right,target,path)) return true;
        path.pop_back();
        return false;
            
    }
    void dfs(TreeNode* root , int a,int b ,vector<int>&ans,vector<int>&visit ){
        if(!root) return;
        
        if(a==b && visit[root->val]== 0){
            ans.push_back(root->val);
        }
        visit[root->val] = 1;

        dfs(root->left ,a+1,b,ans,visit);
        dfs(root->right,a+1,b,ans,visit);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<TreeNode*>path;
        if(!root) return {};
        if(path1(root,target,path));
        /*{
            for(auto i : path) cout<<i->val<<" ";
        }*/
        vector<int>visit(500,0);
        vector<int>ans;
        int size = path.size();
        while(--size>=0){
            dfs(path[size],0,k--,ans,visit);
        }
        

        //for(int i : ans) cout<<i<<" ";

        return ans;
    }
};