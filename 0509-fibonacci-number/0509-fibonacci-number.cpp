class Solution {
public:
    
    // top down appraoch
//     int solveusingmemeoisation(vector<int>&dp,int n)
//     {
//          if(n==0)
//         {
//             return 0;
//         }
//         if(n==1)
//         {
//             return 1;
//         }

//         dp[n]=solveusingmemeoisation(dp,n-1)+solveusingmemeoisation(dp,n-2);
//         return dp[n];

//     }
    
    
// //     bottom up approach 
//      int usingtabulation(vector<int>&dp,int n)
//      {
        
//          dp[0]=0;
//          if(n==0)
//          {
//             return 0;
//          }
//          dp[1]=1;
//          if(n==1)
//          {
//              return 1;
//          }
         
//          for(int i=2;i<=n;i++)
//          {
//                 dp[i]=dp[i-1]+dp[i-2];
//          }
         
//          return dp[n];
         
         
         
         
//      }
    
    int f(int n)
    {
        if(n<=1)
        {
            return n;
        }
     int   last=f(n-1);
      int  slast=f(n-2);
        
        return last+slast;
    }
    
    
    int fib(int n) {
        
        // vector<int>dp(n+1,-1);
        
        // int ans=solveusingmemeoisation(dp,n);
        
        // int ans=usingtabulation(dp,n);
        
        int ans=f(n);
        
        return ans;
        
        
        
       
    }
};