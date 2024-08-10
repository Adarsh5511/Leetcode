class Solution {
public:
    
    int maxs(int index,vector<int>& nums,vector<int>&dp)
    {
     
        if(index==0)
        {
            return nums[index];
        }
        if(index<0) return 0;
        
       
        if(dp[index]!=-1) return dp[index];
       int notpick=0+maxs(index-1,nums,dp);
       
        
        
       int  pick=nums[index]+maxs(index-2,nums,dp);
        
       return dp[index]=max(pick,notpick); 
    
     
        
      return max(pick,notpick);  
    }
    
    int rob(vector<int>& nums) {
        
       if(nums.size()==1) return nums[0];
        
        vector<int>nums1;
        for(int i=1;i<nums.size();i++)
        {
            nums1.push_back(nums[i]);
        }
        vector<int>dp1(nums1.size()+1,-1);
          int index1=nums1.size()-1;
        int ans1=maxs(index1,nums1,dp1);
        
        
     
       
        vector<int>nums2;
        for(int i=0;i<nums.size()-1;i++)
        {
            nums2.push_back(nums[i]);
        }
         vector<int>dp2(nums2.size()+1,-1);
           int index2=nums2.size()-1;
         int ans2=maxs(index2,nums2,dp2);
        
        return max(ans1,ans2);
       
    }
};