class Solution {
public:
    
    int mincost(int index,vector<int>& cost, vector<int>&dp)
    {
        
        
//         if(index>cost.size()-1) return 0;
//         if(index==cost.size()-1) return cost[index];
        
        if(index<0) return 0;
        if(index==0) return cost[index];
        if(index==1) return cost[index];
        
        
        if(dp[index]!=-1) return dp[index];
        
        int left  =cost[index]+ mincost(index-1,cost,dp);
        

         int right =cost[index]+mincost(index-2,cost,dp);
        
        return  dp[index]=min(left,right);
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int index=cost.size()-1;
        vector<int>dp(cost.size(),-1);
        int ans=mincost(index,cost,dp);
        
          int index1=cost.size()-2;
        vector<int>dp1(cost.size(),-1);
        int ans2=mincost(index1,cost,dp1);
        
        return min(ans,ans2);
    }
};