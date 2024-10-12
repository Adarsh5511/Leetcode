//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    
    
    
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // Code here
        
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size(),-1));
        queue<pair<pair<int,int>,int>>q;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1){
                ans[i][j]=0;
                q.push({{i,j},0});
                }
            }
        }
        
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int nearestone=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                
                if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size()){
                    
                    if(grid[nrow][ncol]==0 && ans[nrow][ncol]==-1){
                        
                        
                        int dist=abs(row-nrow)+abs(col-ncol);
                      
                          ans[nrow][ncol]=dist+nearestone;
                        q.push({{nrow,ncol},dist+nearestone});   
                        
                       
                        
                        
                    }
                    
                    
                }
            }
            
            
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        vector<vector<int>> ans = obj.nearest(grid);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends