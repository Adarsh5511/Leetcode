class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& grid,set<pair<int,int>>&store,int delrow[],int delcol[])
    {
        store.insert({row,col});
        
        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            
            if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size())
            {
                if(grid[nrow][ncol]==1 && store.find({nrow,ncol})==store.end())
                {
                    dfs(nrow,ncol,grid,store,delrow,delcol);
                }
            }
            
        }
        
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int count=0;
        
        int n=grid.size();
        int m=grid[0].size();
        
        set<pair<int,int>>store;
        
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==n-1 || i==0 || j==0 || j==m-1)
                {
                    
                    if(grid[i][j]==1)
                    {
                         dfs(i,j,grid,store,delrow,delcol);
                    }
                   
                }
            }
        }
        
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && store.find({i,j})==store.end())
                {
                    count++;
                }
            }
        }
        
        return count;
        
    }
};