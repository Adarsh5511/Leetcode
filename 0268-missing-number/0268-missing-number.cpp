class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int totalsum=0;
        for(int i=1;i<=nums.size();i++)
        {
            totalsum+=i;
        }
        int actualsum=0;
        for(int i=0;i<nums.size();i++)
        {
            actualsum+=nums[i];
        }
        
        return totalsum-actualsum;
        
      
    }
};