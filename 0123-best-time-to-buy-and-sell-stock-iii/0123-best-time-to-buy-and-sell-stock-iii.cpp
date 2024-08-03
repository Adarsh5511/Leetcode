class Solution {
public:
    
    int buysellstock(int index,int buy,int cap,vector<int>&prices,int profit, vector<vector<vector<int>>>&dp)
    {
        if(cap==0) return 0;
        
        if(index==prices.size()) return 0;
        
       if(dp[index][buy][cap]!=-1) return dp[index][buy][cap]; 
        if(buy){
            profit=max(-prices[index]+buysellstock(index+1,0,cap,prices,profit,dp),0+buysellstock(index+1,1,cap,prices,profit,dp));
        }
        else{
            profit=max(prices[index]+buysellstock(index+1,1,cap-1,prices,profit,dp),0+buysellstock(index+1,0,cap,prices,profit,dp));
        }
        
        return dp[index][buy][cap]=profit;
    }
    
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return buysellstock(0,1,2,prices,profit,dp);
    }
};