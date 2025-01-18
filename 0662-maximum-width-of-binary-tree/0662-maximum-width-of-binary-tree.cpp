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
    int widthOfBinaryTree(TreeNode* root) {
           
           if(root==NULL)
           {
            return 0;
           }
        int maxw=0;
        std::queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        while(!q.empty())
        {
            long long minindex=q.front().second;
            int size=q.size();
            int first,last;
            for(int i=0;i<size;i++)
            {
                long long newi=q.front().second-minindex;
                TreeNode* node=q.front().first;
                q.pop();
                if(i==0) first=newi;
                if(i==size-1) last=newi;
                if(node->left) q.push({node->left,2*newi+1});
                if(node->right) q.push({node->right,2*newi+2});
            }
            maxw=max(maxw,(last-first)+1);
        }
        return maxw;
        
    }
};