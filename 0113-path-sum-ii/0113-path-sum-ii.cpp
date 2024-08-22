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
     void solve(TreeNode* root, int targetsum,vector<int>ans, vector<vector<int>>&summ) {
    if (root == NULL) {
        return;
    }
   

    if (root->left == NULL && root->right == NULL) {
        
        if(targetsum == root->val){
             ans.push_back(root->val);
            summ.push_back(ans);
        }
        else{
            // ans.pop_back();
            return;
        }
    }
    
    ans.push_back(root->val);
     solve(root->left, targetsum - root->val,ans,summ);
    solve(root->right, targetsum - root->val,ans,summ);
    
    

}
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>ans;
        int sum=0;
      vector<vector<int>> summ={};
      solve(root,targetSum,ans,summ);
        return summ;
        
    }
};