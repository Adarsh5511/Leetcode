//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
//   void dfs(vector<vector<pair<int, int>>>&lis,int &count,vector<int>&vis,int src,int dest,int &minDist)
//     {
//       if(src==dest)
//       { 
//           minDist = min(minDist, count);
//           return;
//       }
        
//         vis[src]=1;
         
//         for(auto it:lis[src])
//         {
            
//           int first=it.first;
//           int w=it.second;
//             if(vis[first]!=1)
//             {
//               count+=w;
               
//              dfs(lis,count,vis,first,dest,minDist);
//              count-=w;
              
          
//             }
            
            
//         }
//         vis[src]=0;
         
        
        
        
//     }


    void dfs(int node,vector<vector<pair<int, int>>>&adjlist,vector<int>&vis,stack<int>&st)
    {
        vis[node]=1;
        
        for(auto it:adjlist[node])
        {
            int ele=it.first;
            int w=it.second;
            
            if(vis[ele]==0)
            {
                dfs(ele,adjlist,vis,st);
            }
        }
        
        st.push(node);
        
    }
   
    void creategraph(  vector<vector<pair<int, int>>>&adjlist,vector<vector<int>>&edges,int N)
    {
        for(auto edge:edges)
        {
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];
            adjlist[u].push_back({v,w});
           
            
        }
    }
     
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        
          
        vector<int>sdst(N,-1);
        vector<int>vis(N,0);
      vector<vector<pair<int, int>>> adjlist(N);
        creategraph(adjlist,edges,N);
        stack<int>st;
        
        dfs(0,adjlist,vis,st);
        
        vector<int>ans(N,INT_MAX);
       
        
        ans[0]=0;
        while(!st.empty())
        {
            int top=st.top();
            int srcd=ans[top];
            
            st.pop();
            
            for(auto ngbr:adjlist[top])
            {
                int dist=ngbr.second;
                if(ans[top]==INT_MAX){
                    ans[ngbr.first]=min(ans[ngbr.first],dist);
                }
                else if(ans[top]!=INT_MAX){
                      int d=ans[top];
                      int nwdist=d+dist;
                      ans[ngbr.first]=min(ans[ngbr.first],nwdist);
                }
                
            }
            
            
        }
        
      
        
       for(int i=0;i<ans.size();i++)
       {
           if(ans[i]==INT_MAX)
           {
               ans[i]=-1;
           }
       }
        
     
     
        
       
        return ans;
    
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends