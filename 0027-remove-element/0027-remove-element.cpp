class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int index=0;
       int cunt=0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==val)
        {
            cunt++;
        }
        if(nums[i]!=val)
        {
          nums[index]=nums[i];
          index++;
        }
       }
        // cout<<nums.size()-index;
        return nums.size()-cunt;
    }
};