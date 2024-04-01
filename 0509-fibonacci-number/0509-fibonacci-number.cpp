class Solution {
public:
    
    
    int solveusingmemeoisation(vector<int>&dp,int n)
    {
         if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }

        dp[n]=solveusingmemeoisation(dp,n-1)+solveusingmemeoisation(dp,n-2);
        return dp[n];

    }
    
    
    int fib(int n) {
        
        vector<int>dp(n+1,-1);
        
        int ans=solveusingmemeoisation(dp,n);
        
        return ans;
        
        
        
       
    }
};