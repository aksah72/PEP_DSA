//Binary Search Tree

/* A Binary Search Tree(BST) ia a special type of tree where
   # Every node has at most two children.
   #for Every Node :
        #All values in the LST is always smaller 
        #All values in the RST is always greater 
   #Both LST & RST are also BST

   In order traversal of a BST is always sorted
*/

 
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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL || root->val == val) return root;
        

        if(val<root->val) {
            return searchBST(root->left,val);
        }
        return searchBST(root->right,val);
        
    }
};

