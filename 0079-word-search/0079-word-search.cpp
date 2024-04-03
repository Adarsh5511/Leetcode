class Solution {
public:
    
    bool search(int i,int j,int row,int col,vector<vector<char>>& board,string word,int k)
    {
        if(k==word.size())return true;
        if(i<0|| j<0|| i==row||j==col|| word[k]!=board[i][j]) return false;
        char ch=board[i][j];
        board[i][j]='#';
        bool op1=search(i+1,j,row,col,board,word,k+1);
        bool op2=search(i,j+1,row,col,board,word,k+1);
        bool op3=search(i-1,j,row,col,board,word,k+1);
        bool op4=search(i,j-1,row,col,board,word,k+1);
        board[i][j]=ch;
        
        return op1||op2||op3||op4;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
         int row=board.size();
        int col=board[0].size();
        int k=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(word[0]==board[i][j])
                {
                   if(search(i,j,row,col,board,word,0))
                   return true;
                }
            }
        }
        return false;
    }
};