class Solution {
public:
//     int dfs(vector<vector<int>>& mat, vector<vector<int>>& ans, int row, int col, int delRow[], int delCol[]) {
      
//         if (ans[row][col] != -1) {
//             return ans[row][col];
//         }
        
        
//         ans[row][col] = INT_MAX - 1;  
        
     
//         for (int i = 0; i < 4; i++) {
//             int newRow = row + delRow[i];
//             int newCol = col + delCol[i];
            
           
//             if (newRow >= 0 && newRow < mat.size() && newCol >= 0 && newCol < mat[0].size()) {
                
//                 if (mat[newRow][newCol] == 0) {
//                     ans[row][col] = 1;
//                     return 1;
//                 }
            
//                 int neighborDistance = dfs(mat, ans, newRow, newCol, delRow, delCol);
//                 if (neighborDistance != INT_MAX - 1) {
//                     ans[row][col] = min(ans[row][col], 1 + neighborDistance);
//                 }
//             }
//         }
        
//         return ans[row][col];
//     }
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size(),-1));
        
        queue<pair<pair<int,int>,int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({{i,j},0});
                    ans[i][j]=0;
                }
            }
        }
        
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int nearestzero=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m)
                {
                    if(mat[nrow][ncol]==1 && ans[nrow][ncol]==-1)
                    {
                        int dist=abs(row-nrow)+abs(col-ncol);
                        ans[nrow][ncol]=nearestzero+dist;
                        q.push({{nrow,ncol},nearestzero+dist});
                    }
                }
            }
            
        }
        
        return ans;
        
    }
};
