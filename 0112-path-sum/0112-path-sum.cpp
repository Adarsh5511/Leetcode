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
    
    bool solve(TreeNode* root,int targetsum,int sum)
    {

        if(root==NULL)
        {
             return false;
        }
        cout<<root->val<<" ";
        sum +=root->val;
        if(root->left==NULL && root->right==NULL)
        {
               if(sum==targetsum)
               {
                     // cout<<sum<<" ";
                     return true;
               }
                else
                {
                     return false;
                }
            
        }
        
        bool leftans=solve(root->left,targetsum,sum);
        cout<<leftans;
        
        bool rigthans=solve(root->right,targetsum,sum);
        cout<<rigthans;
        
        return leftans||rigthans;
        
}
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        int  sum=0;
        bool ans=solve(root,targetSum,sum);
        
        return ans;
        
    }
};