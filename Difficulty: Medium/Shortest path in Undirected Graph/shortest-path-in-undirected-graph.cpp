//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
 
    
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
   
    // void creategraph(  vector<vector<pair<int, int>>>&adjlist,vector<vector<int>>&edges,int N)
    // {
    //     for(auto edge:edges)
    //     {
    //         int u=edge[0];
    //         int v=edge[1];
    //         int w=1;
    //         adjlist[u].push_back({v,w});
    //         adjlist[v].push_back({u,w});
           
            
    //     }
    // }
     
    //  vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
    //     // code here
        
          
       
    
        
    // }
    
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        
        queue<pair<int,int>>q;
      vector<vector<int>> adjlist(N);
       for(auto edge:edges)
        {
            int u=edge[0];
            int v=edge[1];
        
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
           
            
        }
        q.push({src,0});
        vector<int>ans(N,INT_MAX);
        ans[src]=0;
        while(!q.empty())
        {
            
            int node=q.front().first;
            int w=q.front().second;
            q.pop();
            for(auto it:adjlist[node])
            {
                int newdist=1+w;
                if(newdist<ans[it])
                {
                    ans[it]=newdist;
                    q.push({it,newdist});
                }
                
            }
            
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==INT_MAX){
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
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends