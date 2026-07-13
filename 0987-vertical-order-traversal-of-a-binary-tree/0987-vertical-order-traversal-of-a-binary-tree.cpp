/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<tuple<int, int, int>> nodes;

    void dfs(TreeNode* root, int row, int col) {
        if (!root) return;

        nodes.push_back({col, row, root->val});

        dfs(root->left, row + 1, col - 1);
        dfs(root->right, row + 1, col + 1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root, 0, 0);

        sort(nodes.begin(), nodes.end());

        vector<vector<int>> ans;

        int i = 0;
        while (i < nodes.size()) {
            vector<int> temp;
            int col = get<0>(nodes[i]);

            while (i < nodes.size() && get<0>(nodes[i]) == col) {
                temp.push_back(get<2>(nodes[i]));
                i++;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};