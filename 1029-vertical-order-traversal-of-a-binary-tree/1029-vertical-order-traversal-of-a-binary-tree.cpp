class Solution {
public:
    void verticalTraversalHelper(TreeNode* root, vector<pair<pair<int, int>, int>>& store, int row, int col) {
        if (root == nullptr) {
            return;
        }
        // Preorder traversal: store the value with its row and column
        store.push_back({{col, row}, root->val});
        verticalTraversalHelper(root->left, store, row + 1, col - 1);
        verticalTraversalHelper(root->right, store, row + 1, col + 1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<pair<pair<int, int>, int>> store;
        // Perform traversal and store nodes with (col, row, value)
        verticalTraversalHelper(root, store, 0, 0);

        // Sort by: column -> row -> value
        sort(store.begin(), store.end(), [](const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b) {
            if (a.first.first != b.first.first) {
                return a.first.first < b.first.first; // Sort by column
            }
            if (a.first.second != b.first.second) {
                return a.first.second < b.first.second; // Sort by row
            }
            return a.second < b.second; // Sort by value
        });

        // Group nodes by column and prepare the final result
        vector<vector<int>> result;
        int currentColumn = INT_MIN;
        vector<int> columnNodes;

        for (const auto& entry : store) {
            int col = entry.first.first;
            int value = entry.second;

            if (col != currentColumn) {
                // Start a new column
                if (!columnNodes.empty()) {
                    result.push_back(columnNodes);
                }
                columnNodes.clear();
                currentColumn = col;
            }
            columnNodes.push_back(value);
        }

        // Add the last column
        if (!columnNodes.empty()) {
            result.push_back(columnNodes);
        }

        return result;
    }
};
