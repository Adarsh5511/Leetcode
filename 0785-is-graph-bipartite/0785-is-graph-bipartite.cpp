class Solution {
public:
    
//     bool bfs(int n,vector<int>&color,vector<vector<int>>& graph)
//     {
//         queue<int>q;
//         q.push(n);
//         color[n]=0;
        
//         while(!q.empty())
//         {
//             int node=q.front();
//             int c=color[node];
//             q.pop();
//             for(auto ngbr:graph[node])
//             {
//                 if(color[ngbr]==-1)
//                 {
//                     color[ngbr]=!c;
//                     q.push(ngbr);
//                 }
//                 else if(color[ngbr]!=-1 && color[node]==color[ngbr])
//                 {
//                     return false;
//                 }
                
//             }
//         }
        
//         return true;
        
//     }
    
    bool dfs(int node,vector<int>&color,vector<vector<int>>& graph)
    {
       
        
        bool ans=true;
        for(auto ngbr:graph[node])
        {
            if(color[ngbr]==-1)
            {
                 color[ngbr]=!color[node];
                bool ans=dfs(ngbr,color,graph);
                if(!ans)
                {
                    return false;
                }
            }
            else if(color[ngbr]!=-1 && color[ngbr]==color[node])
            {
                return ans=false;
            }
        }
      
        return ans;
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        if(graph.size()==0)
        {
            return false;
        }
        
        int n=graph.size();
        vector<int>color(n,-1);
        
        // for(int i=0;i<graph.size();i++)
        // {
        //     if(color[i]==-1)
        //     {
        //         color[i]=
        //        if(!bfs(i,color,graph))
        //         return false;   
        //     }
        // }
        for(int i=0;i<graph.size();i++)
        {
            if(color[i]==-1)
            {
                color[i]=0;
               if(!dfs(i,color,graph))
                return false;   
            }
        }
        
        
       return true;
        
    }
};