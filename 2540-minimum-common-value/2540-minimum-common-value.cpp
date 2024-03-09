class Solution {
public:
    
      
    
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>mp;
        
        for(auto no:nums1)
        {
            mp[no]++;
        }
        
        for(auto no:nums2)
        {
           if(mp[no]>0)
           {
               return no;
           }
        }
        
        return -1;
    
        
        
    }
};