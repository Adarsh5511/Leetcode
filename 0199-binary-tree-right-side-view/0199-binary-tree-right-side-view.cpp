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
    
    void rightv(TreeNode* root,vector<int>&ans,int &l)
    {
        if(root==NULL)
        {
             return ;
        }
        
        if(ans.size()==l)
        {
              ans.push_back(root->val);
        }
        int newlevel=l+1;
        rightv(root->right,ans,newlevel);
        
        rightv(root->left,ans,newlevel);
        
       

    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        int l=0;
         rightv(root,ans,l);
     
        return ans;
        
        
        
        
        
    }
};