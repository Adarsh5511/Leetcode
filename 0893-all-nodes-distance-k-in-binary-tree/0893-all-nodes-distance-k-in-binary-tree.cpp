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
     

    void makeparentpointers(TreeNode* root,unordered_map<TreeNode* ,TreeNode*>&mp)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(node->left){
                q.push(node->left);
                mp[node->left]=node;
            }
            if(node->right){
                q.push(node->right);
                mp[node->right]=node;
            }
        }

    } 
    void travelalldirections(TreeNode*target,int k,vector<int>&ans,unordered_map<TreeNode*,TreeNode*>&mp)
    {
        queue<TreeNode*>q;
        q.push(target);
        int dist=0;
        unordered_set<TreeNode*>vis;
        // vis.insert(target);
        while(!q.empty() && dist<k)
        {
              
              int size=q.size();
              

              for(int i=0;i<size;i++)
              {
                TreeNode* node=q.front();
                vis.insert(node);
                q.pop();
                if(node->left!=NULL && (vis.find(node->left) == vis.end()))
                {
                    q.push(node->left);
                    //   vis.insert(node->left);
                }
                if(node->right!=NULL && (vis.find(node->right) == vis.end()))
                {
                    q.push(node->right);
                    //   vis.insert(node->right);
                }
                if (mp.find(node) != mp.end() && vis.find(mp[node]) == vis.end()) {
                //   cout<<mp[node]->val;
        q.push(mp[node]);
        // vis.insert(mp[node]);
    }

                 

              }
              
              dist=dist+1;
             
        }

        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            ans.push_back(node->val);
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        unordered_map<TreeNode* ,TreeNode*>mp;
        makeparentpointers(root,mp);
       
        vector<int>ans;
        travelalldirections(target,k,ans,mp);
        return ans;
    }
};
