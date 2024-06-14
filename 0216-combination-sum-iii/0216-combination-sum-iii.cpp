class Solution {
public:
    
    
       
    void find(int index, vector<int>&candidates,int target,vector<vector<int>> &ans,vector<int>&temp,int k)
    {
      
            if(target==0)
            {
                if(temp.size()==k)
                ans.push_back(temp);
                return;
            }
            
         
        
        for(int i=index;i<candidates.size();i++)
        {
            if(i>index && candidates[i]==candidates[i-1]) continue;
            
            if(candidates[i]>target) break;
            
            temp.push_back(candidates[i]);
            find(i+1,candidates,target-candidates[i],ans,temp,k);
            temp.pop_back();
        }
    
        
    }
    
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
       vector<int>q={1,2,3,4,5,6,7,8,9};
       vector<vector<int>> ans;
        
        vector<int>temp;
        
        find(0,q,n,ans,temp,k);
        
       
        
        return ans;
    }
};