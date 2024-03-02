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
    
    TreeNode* createbst(vector<int>&nums,int start,int end)
    {
          if(start>end)
          {
              return NULL;
          }
          int  mid=(start+end)/2;
        
          int elem=nums[mid];
        
          TreeNode* root=new TreeNode(elem);
        
         root->left=createbst(nums,start,mid-1);
        
         root->right=createbst(nums,mid+1,end);
        
        return root;
    
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
         
        
         int start=0;
        int end=nums.size()-1;
        
      TreeNode* ans=createbst(nums,start,end);
        
        return ans;
        
        
        
    }
};