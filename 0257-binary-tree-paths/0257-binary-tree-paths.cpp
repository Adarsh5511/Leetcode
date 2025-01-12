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
  
   void printpath(TreeNode*root,string str,vector<string>&ans)
   {
      if(root->left==NULL && root->right==NULL)
      {

        str+=to_string(root->val);
        ans.push_back(str);
        return;
      }

      string temp=to_string(root->val);
      str=str+temp+"->";
      
      if(root->left) printpath(root->left,str,ans);

      if(root->right) printpath(root->right,str,ans);

    
   }

    vector<string> binaryTreePaths(TreeNode* root) {
        string str="";
         vector<string>ans;
         printpath(root,str,ans);
         return ans;

    }
};