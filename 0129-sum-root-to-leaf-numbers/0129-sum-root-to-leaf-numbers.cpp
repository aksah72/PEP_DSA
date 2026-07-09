/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int sum = 0;
public:
    void dfs(TreeNode* root , int curr){
        if(!root) return;
        curr = curr*10+root->val;
        if(!root->left && !root->right) {
            sum += curr;
            curr = 0;
        }
        
        cout<<curr<<" ";
        dfs(root->left,curr);
        dfs(root->right,curr);
    }
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int curr=  0;

        dfs(root,curr);
        return sum;
    }
};