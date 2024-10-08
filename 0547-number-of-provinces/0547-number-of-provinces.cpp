class Solution {
public:
    
    void dfs(int i,vector<int>adj[],vector<int>&vis)
    {
        vis[i]=1;
        
        for(auto neigh:adj[i])
        {
            if(!vis[neigh])
            {
                dfs(neigh,adj,vis);
            }
             
        }
        
        return;
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(isConnected[i][j]==1)
                    {
                        adj[i].push_back(j);  // For i to j
    adj[j].push_back(i);
                    }
                }
            }
        }
        
        vector<int>vis(n,0);
        int count=0;
       for(int i=0;i<n;i++)
       {
          if(!vis[i])
          {
              count++;
              dfs(i,adj,vis);
          }
       }
        
       
   
        
        return count;
    }
};