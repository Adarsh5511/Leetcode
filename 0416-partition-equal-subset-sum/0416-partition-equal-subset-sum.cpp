class Solution {
public:
    
    int subsetsumelk(int index,vector<int>&nums,int k, vector<vector<int>>&dp)
    {
        if(k==0)
            return true;
        if(index==0)
        {
            return nums[0]==k;
        }
    
        if(dp[index][k]!=-1) return dp[index][k];
        
        int notpick=0+subsetsumelk(index-1,nums,k,dp);
        int pick=0;
        if(nums[index]<=k)
        {
            pick=subsetsumelk(index-1,nums,k-nums[index],dp);
        }
        
        return dp[index][k]=pick||notpick;
    }
    
    bool canPartition(vector<int>& nums) {
        
        int sum=0;
        for(auto it:nums)
        {
            sum+=it;
        }
        if(sum%2!=0) return false;
        int k=sum/2;
        
        int index=nums.size()-1;
        vector<vector<int>>dp(nums.size(),vector<int>(k+1,-1));
        bool ans=subsetsumelk(index,nums,k,dp);
       
        return ans;
        
    }
};