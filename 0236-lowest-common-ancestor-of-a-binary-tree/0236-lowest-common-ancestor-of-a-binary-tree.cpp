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


   TreeNode* lcs(TreeNode* root,TreeNode* p,TreeNode* q)
   {
      if(root==NULL || root==p || root==q)
      {
        return root;
      }

     

      TreeNode* leftans=lcs(root->left,p,q);

      TreeNode* rightans=lcs(root->right,p,q);

      if(leftans!=NULL && rightans!=NULL )
      {
                 return root;
      }
      else if(leftans!=NULL && rightans==NULL)
      {
        return leftans;
      }
      else if(rightans!=NULL && leftans==NULL)
      {
        return rightans;
      }

      return NULL;


   }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       
      
       return lcs(root,p,q);
      
        
    }
};