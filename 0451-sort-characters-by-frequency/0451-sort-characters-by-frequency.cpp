class Solution {
public:
    string frequencySort(string s) {
        
//     unordered_map<char,int>mp;
//         for(auto it:s)
//         {
//             mp[it]++;
//         }
//         vector<pair<char,int>>v;
        
//         for(auto it:mp)
//         {
//             v.push_back({it.first,it.second});
//         }
        
//         sort(v.begin(),v.end(),greater<pair<char, int>>());
        
//         string ans;
//         for(auto i:mp)
//         {
//             for(int k=0;k<i.second;k++)
//             ans.push_back(i.first);
//         }
        
      
//         return ans;
          map<char, int> m;
        for (int i = 0; i < s.length(); i++) {
            m[s[i]]++;
        }

        vector<pair<int, char>> v;
        for (auto it : m) {
            v.push_back({it.second, it.first});
        }

        sort(v.begin(), v.end(), greater<pair<int, char>>());

        string result = "";
        for (auto it : v) {

            for (int i = 0; i < it.first; i++) {
                result += it.second;
            }
        }
        return result;
        
        
    }
};