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
    
    void rightv(TreeNode* root,int &l,map<int,int>&mp)
    {
       if(root==NULL)
       {
        return;
       }

       if(mp.find(l)==mp.end())
       {
         mp[l]=root->val;
       }
        l=l+1;
        if(root->right!=NULL) rightv(root->right,l,mp);
        
        if(root->left!=NULL) rightv(root->left,l,mp);
        l=l-1;
       

    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        
        map<int,int>mp;
        vector<int>ans;
        int l=0;
        rightv(root,l,mp);

        for(auto i:mp)
        {
            ans.push_back(i.second);
        }

        return ans;
        
        
    }
};