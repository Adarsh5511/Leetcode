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

   void countn(TreeNode* root,int &count)
    {
         if(root==NULL)
         {
            return;
         }
         if(root!=NULL)
         {
            count=count+1;
         }
        if(root->left)   countn(root->left,count);
        if(root->right)  countn(root->right,count);
    }
   
    int countNodes(TreeNode* root) {
        int count=1;
        if(root==NULL)
        {
            return 0;
        }

        if(root->left!=NULL) countn(root->left,count);
        

        if(root->right)   countn(root->right,count);
       

        // cout<<count;
        return count;

    }
};