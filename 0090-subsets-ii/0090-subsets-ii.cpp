class Solution {
public:
    
    void include(int index, set<vector<int>>&ans,vector<int>& nums,vector<int>&temp)
    {
        if(index==nums.size())
        {
            ans.insert(temp);
            return;
        }
        
        temp.push_back(nums[index]);
        include(index+1,ans,nums,temp);
        temp.pop_back();
        
        
        
        include(index+1,ans,nums,temp);

    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
         
         sort(nums.begin(),nums.end());
         set<vector<int>>ans;
         vector<int>temp;
         
         include(0,ans,nums,temp);
        
         vector<vector<int>>ans1(ans.begin(),ans.end());
        
         
        
         return ans1;
    }
};