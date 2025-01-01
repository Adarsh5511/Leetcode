class Solution {
public:
    int partitionString(string s) {
        
        unordered_map<char,int>mp;
        int i=0;
        mp[s[i]]++;
        i=i+1;
        int count=0;
        while(i<s.size())
        {
            char ch=s[i];
             if(mp.find(ch)!=mp.end())
             {
                count++;
                mp.clear();
                mp[ch]++;
             }
             else if(mp.find(ch)==mp.end()){
                      mp[ch]++;

             }
             i++;
        }
        if(mp.size()!=0)
        {
            count++;
        }
        return count;

    }
};