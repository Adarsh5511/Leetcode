class Solution {
public:
    
    void dfs(int row,int col,vector<vector<char>>& board,int delrow[],int delcol[],   set<pair<int, int>> &store)
    {
        store.insert({row,col});
        
        for(int i=0;i<4;i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            
            if(nrow>=0 && nrow<board.size() && ncol>=0 && ncol<board[0].size())
            {
               if(board[nrow][ncol]=='O' && store.find({nrow, ncol}) == store.end()){
                
                  dfs(nrow,ncol,board,delrow,delcol,store);
               }
               
                    
            }
        }
        
//         return;
         
    }
    
    void solve(vector<vector<char>>& board) {
          if (board.empty() || board[0].empty()) return;
        set<pair<int, int>> store;
        
        int n=board.size();
        int m=board[0].size();
        
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if((i == 0 || i == n - 1 || j == 0 || j == m - 1)&& board[i][j]=='O') {
               
                   dfs(i,j,board,delrow,delcol,store);
                    
                
                }
                
            }
        }
        
       for(int i=0;i<board.size();i++)
       {
           for(int j=0;j<board[0].size();j++){
               
               if(board[i][j]=='O' && store.find({i,j})==store.end())
               {
                   board[i][j]='X';
               }
           }
       }
        
    }
};