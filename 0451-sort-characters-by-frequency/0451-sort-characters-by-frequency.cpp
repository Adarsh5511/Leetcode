class Solution {
public:
    string frequencySort(string s) {
        
    unordered_map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        vector<pair<int,char>>v;
        
        for(auto it:mp)
        {
            v.push_back({it.second,it.first});
        }
        
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        
        string ans;
        for(auto i:v)
        {
            for(int k=0;k<i.first;k++)
            ans.push_back(i.second);
        }
        
      
        return ans;
        
        
       
        
    }
};