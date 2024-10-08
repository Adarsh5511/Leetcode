class Solution {
public:
    
    void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int      initialcolor,int ncolor,int delrow[],int delcol[])
    {
        ans[row][col]=ncolor;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==initialcolor
              && ans[nrow][ncol]!=ncolor)
            {
                dfs(nrow,ncol,ans,image,initialcolor,ncolor,delrow,delcol);
            }
        }
        
        return;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        vector<vector<int>>ans=image;
        int initialcolor=image[sr][sc];
        int delrow[4]={-1,0,1,0};
        int delcol[4]={0,1,0,-1};
        dfs(sr,sc,ans,image,initialcolor,color,delrow,delcol);
        return ans;
    }
};