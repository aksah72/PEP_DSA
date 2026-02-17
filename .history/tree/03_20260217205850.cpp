//Binary Search Tree

/* A Binary Search Tree(BST) ia a special type of tree where
   # Every node has at most two children.
   #for Every Node :
        #All values in the LST is always smaller 
        #All values in the RST is always greater 
   #Both LST & RST are also BST

   In order traversal of a BST is always sorted
*/

// https://leetcode.com/problems/search-in-a-binary-search-tree/description/

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


//https://leetcode.com/problems/range-sum-of-bst/description/

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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL) return 0;
        int sum = 0;

        int data = root->val;
        if(data<=high && data>=low) sum+= data;

        sum += rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);

        return sum;

        
    }
};


//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/

