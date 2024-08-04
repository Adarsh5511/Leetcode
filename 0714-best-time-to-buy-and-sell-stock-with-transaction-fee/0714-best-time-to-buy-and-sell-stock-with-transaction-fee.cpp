class Solution {
public:
    
    int maxtrfeeprofit(int index,int buy,vector<int>&prices,int fee,int profit,vector<vector<int>>&dp)
    {
        if(index==prices.size())
        {
            return 0;
            
        }
        if(dp[index][buy]!=-1) return dp[index][buy];
        if(buy)
        {
            profit=max(-prices[index]+maxtrfeeprofit(index+1,0,prices,fee,profit,dp),0+maxtrfeeprofit(index+1,1,prices,fee,profit,dp));
            
        }
        else{
            
            profit=max(prices[index]+maxtrfeeprofit(index+1,1,prices,fee,profit,dp)-fee,0+maxtrfeeprofit(index+1,0,prices,fee,profit,dp));
            
            
        }
        return dp[index][buy]=profit;
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        
        int profit=0;
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
      return   maxtrfeeprofit(0,1,prices,fee,profit,dp);
    }
};