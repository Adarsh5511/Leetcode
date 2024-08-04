class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        
        vector<int>col;
        vector<int>rows;
        for(int i=0;i<matrix.size();i++)
        {
             for(int j=0;j<matrix[0].size();j++)
             {
               if(matrix[i][j]==0)
               {
                 
                 rows.push_back(i);  
                 col.push_back(j);         
                  
                }
                  
               }
                   
             }
         int c=0;
      while(c<col.size()){
       int column=col[c];
           for(int i=0;i<matrix.size();i++)
           {
             matrix[i][column]=0;
           }
          c++;
      }
      int r=0;
      while(r<rows.size()){
       int rowid=rows[r];
           for(int j=0;j<matrix[0].size();j++)
           {
             matrix[rowid][j]=0;
           }
          r++;
      }
        }
    
     
        
    
};