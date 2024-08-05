class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
     
         unordered_map<string,int>mp;
        vector<string>order;
        for(auto it:arr)
        {
            if(mp[it]==0)
            {
                order.push_back(it);
            }
            
            mp[it]++;
        }
        

       vector<string>ans;
     for(auto it:order)
     {
         if(mp[it]==1)
         {
             ans.push_back(it);
         }
     }
       
        if(k-1<ans.size())
        return ans[k-1];
        else
        return "";
    }
};