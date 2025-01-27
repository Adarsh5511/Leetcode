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

   

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }

        TreeNode* root=BT(postorder,0,postorder.size()-1,inorder,0,inorder.size(),mp);
        return root;
    }
     TreeNode* BT(vector<int>& postorder,int posstart,int posend,vector<int>& inorder,int instart,int inend,map<int,int>&mp)
    {
        if(posstart>posend || instart>inend) return NULL;

           TreeNode* root=new TreeNode(postorder[posend]);

           int inroot=mp[root->val];

            int numsleft = inroot - instart;

        // Recursive calls to construct left and right subtrees
        root->left = BT(postorder, posstart, posstart + numsleft - 1, inorder, instart, inroot - 1, mp);
        root->right = BT(postorder, posstart + numsleft, posend - 1, inorder, inroot + 1, inend, mp);

        return root;
 

    }
};