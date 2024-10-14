class Solution {
public:
    
//     bool dfs(int node,vector<int>&vis,vector<int>&pathvis,vector<vector<int>>& graph)
//     {
//            vis[node]=1;
//            pathvis[node]=1;
           
        
//            for(auto ngbr:graph[node])
//            {
//                if(vis[ngbr]==0)
//                {
//                    if(dfs(ngbr,vis,pathvis,graph)==true)
//                    {
//                        return true;
//                    }
                   
//                }
//                else if(vis[ngbr]==1 && pathvis[ngbr]==1)
//                {
//                    return true;
//                }
               
//            }
        
//         pathvis[node]=0;
        
//         return false;
//     }
    
  
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int n=graph.size();
        vector<int>indegree(n);
        vector<vector<int>>adjreverse(n);
        
        for(int i=0;i<n;i++)
        {
            for(auto ngbr:graph[i])
            {
                adjreverse[ngbr].push_back(i);
                indegree[i]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it:adjreverse[node])
            {
               indegree[it]--;
               if(indegree[it]==0)
               {
                   q.push(it);
               }
            }
        }
      
            
        sort(ans.begin(),ans.end());
        return ans;
    }
};