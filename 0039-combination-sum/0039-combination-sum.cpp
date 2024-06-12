class Solution {
public:
    
    void findcombination(int index,vector<int>&candidates,vector<vector<int>>&ans,int target,vector<int>&temp)
    {
        if(index==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(temp);

            }
            return;
        }
        if(candidates[index]<=target)
        {
            temp.push_back(candidates[index]);
            findcombination(index,candidates,ans,target-candidates[index],temp);
            temp.pop_back();
        }
       
        
        findcombination(index+1,candidates,ans,target,temp);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        findcombination(0,candidates,ans,target,temp);
        return ans;
    }
};