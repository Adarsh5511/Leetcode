class Solution {
public:
  
    int solveusingmemo(vector<int>&dp,vector<int>& nums,int i){

        if(i>=nums.size())
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
         
      int include=nums[i]+solveusingmemo(dp,nums,i+2);
       int exclude=0+solveusingmemo(dp,nums,i+1);
       dp[i]=max(include,exclude);
        return dp[i]; 

    }
   
    int rob(vector<int>& nums) {
        
    
        vector<int>dp(nums.size()+1,-1);

    int ans= solveusingmemo(dp,nums,0);
    return ans;
     
         
    

    }
};