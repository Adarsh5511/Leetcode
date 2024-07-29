class Solution {
public:
    
    int coinchanges(int index,vector<int>&nums,int target,vector<vector<int>>&dp)
    {
        
        if(index==0)
        {
           
           
            if(target%nums[index]==0) return 1;
            
           
            
            else
            {
                return 0;
            }
        }
        
        if(dp[index][target]!=-1)return dp[index][target];
        
        int notpick=coinchanges(index-1,nums,target,dp);
        int pick=0;
        if(nums[index]<=target)
        {
            
            pick=coinchanges(index,nums,target-nums[index],dp);
        }
        
        return dp[index][target]=pick+notpick;
    }
    
    int change(int amount, vector<int>& coins) {
        
        int n=coins.size();
         vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int index=coins.size()-1;
       int ans=coinchanges(index,coins,amount,dp);
        return ans;
    }
};