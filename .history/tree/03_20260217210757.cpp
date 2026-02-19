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


 * Definition for a binary tree node.
 struct TreeNode {
       int val;
       TreeNode *left;
       TreeNode *right;
       TreeNode() : val(0), left(nullptr), right(nullptr) {}
       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 
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
    TreeNode* solve(vector<int>& nums , int l , int r){
        if(l>r) return NULL;
        int mid = (l + r)/2; 
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = solve(nums,l,mid-1);
        node->right = solve(nums,mid+1,r);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};


//https://leetcode.com/problems/insert-into-a-binary-search-tree/description/


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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = root;
        TreeNode* node = new TreeNode(val);
        if(root == NULL) return node;

        if(val < root->val){
            root->left = insertIntoBST(root->left , val);
        }
        else{
            root->right = insertIntoBST(root->right,val);
        }
        return root;
    }
};


