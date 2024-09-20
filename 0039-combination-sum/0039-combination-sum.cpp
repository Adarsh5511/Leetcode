class Solution {
public:
    
    void combinations(int index,vector<int>& candidates,vector<vector<int>>&ans,vector<int>temp,int target){
        
        if(index>=candidates.size()){
            
            if(target==0){
                ans.push_back(temp);
                
            }
            return;
        }
        
        
        if(candidates[index]<=target){
            temp.push_back(candidates[index]);
            combinations(index,candidates,ans,temp,target-candidates[index]);
            temp.pop_back();
            
        }
        
        
        combinations(index+1,candidates,ans,temp,target);
    }
   
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      
        vector<vector<int>>ans;
        vector<int>temp;
        int index=0;
        combinations(index,candidates,ans,temp,target);
        
        return ans;
        
    }
};