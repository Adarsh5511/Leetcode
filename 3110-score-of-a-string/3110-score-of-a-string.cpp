class Solution {
public:
    int scoreOfString(string s)
    {
        int ans=0;
        int i=0;
        int j=i+1;
        while(i<s.size() && j<s.size())
        {
             ans+=abs(int(s[i])-int(s[j]));
            i++;
            j++;
            
        }
     

        return ans;
    }
};