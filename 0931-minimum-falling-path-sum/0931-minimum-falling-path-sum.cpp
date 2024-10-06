class Solution {
public:
    
//     int travelallways(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>&dp)
//     {
        
//         if(i==matrix.size()-1)
//         {
//             return matrix[i][j];
//         }
        
        
//         if(dp[i][j]!=-1) return dp[i][j];
        
//        // int left = INT_MAX, right = INT_MAX, mid = INT_MAX;
//         int sum=matrix[i][j];
//         int minsum=INT_MAX;

//           for(int shift = -1; shift<=1; shift++) {
//             if(i+1<matrix.size() && j + shift >=0 && j+shift < matrix.size()) {
//   minsum = min(minsum, matrix[i][j] + travelallways(matrix, i+1, j+shift, dp));
//             }
//         }
       
// //         if ( j - 1 >= 0) {
// //             minsum=min(minsum,sum + travelallways(matrix, i + 1, j - 1, dp));
// //         }

      
// //         if ( j + 1 < matrix[0].size()) {
// //              minsum=min(minsum,sum + travelallways(matrix, i + 1, j + 1, dp));
// //         }

     
// //         // if (i + 1 < matrix.size()) {
// //              minsum=min(minsum,sum + travelallways(matrix, i + 1, j , dp));
// //         // }
        

//         return dp[i][j]=minsum;
        
//     }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        
         vector<vector<int>> m(n, vector<int>(n));
        
        for(int j=0;j<n;j++){
            m[0][j]=matrix[0][j];
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int left=INT_MAX;
                int right=INT_MAX;
                
                if(j-1>=0)
                {
                    left=m[i-1][j-1];
                }
                 if(j+1<n)
                {
                    right=m[i-1][j+1];
                }
                
                m[i][j]=matrix[i][j]+min({left,right,m[i-1][j]});
            }
                
        }
        
        int ans=INT_MAX;
        for(int j=0;j<m.size();j++)
        {
            ans=min(ans,m[n-1][j]);
        }
        
        return ans;
        
    }
};