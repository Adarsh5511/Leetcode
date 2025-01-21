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
    void findNodesAtDistanceK(TreeNode* root, int k, vector<int>& result) {
        if (!root) return;
        if (k == 0) {
            result.push_back(root->val);
            return;
        }
        findNodesAtDistanceK(root->left, k - 1, result);
        findNodesAtDistanceK(root->right, k - 1, result);
    }

    int dfs(TreeNode* root, TreeNode* target, int k, vector<int>& result) {
        if (!root) return -1;

        if (root == target) {
            findNodesAtDistanceK(root, k, result); // Collect nodes at distance k from target.
            return 0;
        }

        int leftDistance = dfs(root->left, target, k, result);
        if (leftDistance != -1) {
            if (leftDistance + 1 == k) result.push_back(root->val);
            else findNodesAtDistanceK(root->right, k - leftDistance - 2, result);
            return leftDistance + 1;
        }

        int rightDistance = dfs(root->right, target, k, result);
        if (rightDistance != -1) {
            if (rightDistance + 1 == k) result.push_back(root->val);
            else findNodesAtDistanceK(root->left, k - rightDistance - 2, result);
            return rightDistance + 1;
        }

        return -1; // Target not found in either subtree.
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> result;
        dfs(root, target, k, result);
        return result;
    }
};
