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
    
//     void solve(TreeNode* root,int sum,int targetsum,vector<vector<int>> &summ,vector<int> ans)
//     {
        
//           if(root==NULL)
//         {
//             return ;
//         }
//         sum +=root->val;
//          ans.push_back(root->val);
//         if(root->left==NULL && root->right==NULL)
//         {
//            if(sum==targetsum)
//            {
//                summ.push_back(ans);
                
//            }
//             else
//             {
//                 return;
//             }
//         }
        
//         solve(root->left,sum,targetsum,summ,ans);
//         solve(root->right,sum,targetsum,summ,ans);
        
                
        
        
        
//     }
//      void solve(TreeNode* root, int targetsum,vector<int>&ans, vector<vector<int>>&summ) {
//     if (root == NULL) {
//         return;
//     }
   
//             ans.push_back(root->val);

//     if (root->left == NULL && root->right == NULL) {
        
//         if(targetsum == root->val){
          
//             summ.push_back(ans);
//         }
  
//            else {
        
//         solve(root->left, targetsum - root->val, ans, summ);
//         solve(root->right, targetsum - root->val, ans, summ);
    
//            }
    
//     ans.pop_back();
//         }
//     }
    
// //     ans.push_back(root->val);
// //      solve(root->left, targetsum - root->val,ans,summ);
      
// //     solve(root->right, targetsum - root->val,ans,summ);
    void solve(TreeNode* root, int targetsum, vector<int>& ans, vector<vector<int>>& summ) {
    if (root == NULL) {
        return;
    }

    // Add the current node's value to the path
    ans.push_back(root->val);

    // If it's a leaf node and the target sum matches, add the path to the result
    if (root->left == NULL && root->right == NULL) {
        if (targetsum == root->val) {
            summ.push_back(ans);
        }
    } else {
        // Otherwise, continue to explore the left and right subtrees
        solve(root->left, targetsum - root->val, ans, summ);
        solve(root->right, targetsum - root->val, ans, summ);
    }

    // Backtrack: remove the last element before returning to the previous node
    ans.pop_back();
}
    


    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>ans;
        int sum=0;
      vector<vector<int>> summ={};
      solve(root,targetSum,ans,summ);
        return summ;
        
    }
};