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
public:
    void preorder(TreeNode* root , vector<TreeNode*> &vec){
        if(!root) return ;
        
        vec.push_back(root);
        preorder(root->left,vec);
        preorder(root->right,vec);
    }
    void flatten(TreeNode* root) {
        if(!root) return;
        vector<TreeNode*> vec;
        preorder(root,vec);
        for(int i = 1;i<vec.size();i++){
            root->right = vec[i];
            root->left = NULL;
            root=root->right;
        }
    }
};