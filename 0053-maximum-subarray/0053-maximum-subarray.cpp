class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
        
        int currsum=nums[0];
        int maxsum=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(currsum>=0)
            {
                currsum+=nums[i];
            }
            else
            {
                currsum=nums[i];
            }
            
            if(currsum>maxsum)
            {
                maxsum=currsum;
            }
        }
        
        return maxsum;
    }
    
};