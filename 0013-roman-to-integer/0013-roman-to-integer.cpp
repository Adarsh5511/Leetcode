class Solution {
public:
    int romanToInt(string s) {
        
        
        unordered_map<char,int>mp{
            { 'I',1},
            // {'II',2},
            // {'III',3},
            // {'IV',4},
            {'V',5},
            // {'VI',6},
            // {'VII',7},
            // {'VIII',8},
            // {'IX',9},
            {'X',10},
            // {'XL',40},
            {'L',50},
            // {'XC',90},
            {'C',100},
            // {'CD',400},
            {'D',500},
            // {'CM',900},
            {'M',1000}
            
            };
        int ans=0;
        int i=0;
        while(i<s.size())
        {
           if(s[i]=='I' && s[i+1]=='V' && i+1<s.size())
           {
               ans+=4;
               i=i+2;
           }
           else if(s[i]=='I' && s[i+1]=='X' && i+1<s.size())
           {
               ans+=9;
                   i=i+2;
           }
            else if(s[i]=='X' && s[i+1]=='L' && i+1<s.size())
            {
                ans+=40;
                i=i+2;
            }
            else if(s[i]=='X' && s[i+1]=='C' && i+1<s.size())
            {
                ans+=90;
                i=i+2;
            }
               else if(s[i]=='C' && s[i+1]=='D' && i+1<s.size())
            {
                ans+=400;
                   i=i+2;
            }
            else if(s[i]=='C' && s[i+1]=='M' && i+1<s.size())
            {
                ans+=900;
                i=i+2;
            }
            else{
                char ch=s[i];
            if(mp.find(ch)!=mp.end())
            {
                cout<<mp[ch];
                ans+=mp[ch];
            }
                i++;
            }
        }
        return ans;
        
        
    }
};