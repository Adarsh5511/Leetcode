class Solution {
public:

    
    string mapping(string s)
    {
        char start='a';
        char map[200]={0};
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(map[ch]==0)
            {
                map[ch]=start;
                start++;
            }
            
        }
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            char mapped=map[ch];
            s[i]=mapped;
        }
        return s;
    }
   
    bool isIsomorphic(string s, string t) {
        
        string a=mapping(s);
        string b=mapping(t);

      if(b==a)
          return true;
      return false;

    


    }
};