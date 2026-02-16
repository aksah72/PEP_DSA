


/*
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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL) return result;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<int> ans;

            for(int i =0 ;i<size;i++){
                TreeNode* frontNode = que.front();
                que.pop();

                ans.push_back(frontNode->val);
                if(frontNode->left) que.push(frontNode->left); 
                if(frontNode->right) que.push(frontNode->right);

            }
            result.push_back(ans);
                
        }
        return result;

    }
};