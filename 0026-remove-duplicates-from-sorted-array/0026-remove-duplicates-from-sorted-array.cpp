class Solution {
public:
    int removeDuplicates(vector<int>& nums)
     {
         int n=nums.size();
        
       set<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.insert(nums[i]);
        }
        int index=0;
        for(auto it:ans)
        {
            nums[index]=it;
            index++;
            
        }
        
        return ans.size();
    }
};