class Solution {
public:
    
    bool dfs(int node,vector<int>&vis,vector<int>&pathvis,vector<vector<int>>& graph)
    {
           vis[node]=1;
           pathvis[node]=1;
           
        
           for(auto ngbr:graph[node])
           {
               if(vis[ngbr]==0)
               {
                   if(dfs(ngbr,vis,pathvis,graph)==true)
                   {
                       return true;
                   }
                   
               }
               else if(vis[ngbr]==1 && pathvis[ngbr]==1)
               {
                   return true;
               }
               
           }
        
        pathvis[node]=0;
        
        return false;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int n=graph.size();
        vector<int>vis(graph.size(),0);
        vector<int>pathvis(graph.size(),0);
        
        vector<int>ans;
        
      
        
        for(int i=0;i<n;i++)
        {
            
                if(dfs(i,vis,pathvis,graph)==false)
                {
                    ans.push_back(i);
                }
            
        }
            
         
        return ans;
    }
};