class Solution {
public:
    
    int kmaxprofit(int index,int buy,vector<int>&prices,int profit ,int k,vector<vector<vector<int>>>&dp)
    {
        if(k==0)
        {
             return 0;
        }
        if(index==prices.size()) return 0;
        
        if(dp[index][buy][k]!=-1) return dp[index][buy][k];
        
        if(buy)
        {
            profit=max(-prices[index]+kmaxprofit(index+1,0,prices,profit,k,dp),0+kmaxprofit(index+1,1,prices,profit,k,dp));
        }
        else{
            profit=max(prices[index]+kmaxprofit(index+1,1,prices,profit,k-1,dp),0+kmaxprofit(index+1,0,prices,profit,k,dp));
        }               
              
        return dp[index][buy][k]=profit;               
    }
    
    int maxProfit(int k, vector<int>& prices) {
        
        int profit=0;
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        
        return kmaxprofit(0,1,prices,profit,k,dp);
        
    }
};