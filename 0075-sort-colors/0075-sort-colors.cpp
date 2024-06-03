class Solution {
public:
    void sortColors(vector<int>& nums) {
       vector<int>arr;
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]==0)
            {
                arr.push_back(nums[i]);
            }
            i++;
        }
        int j=0;
        while(j<nums.size())
        {
            if(nums[j]==1)
            {
                arr.push_back(nums[j]);
            }
            j++;
        }
        int k=0;
        while(k<nums.size())
        {
            if(nums[k]==2)
            {
                arr.push_back(nums[k]);
            }
            k++;
        }
        
        nums=arr;
        
        
        
    }
};