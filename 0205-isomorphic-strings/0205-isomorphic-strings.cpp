class Solution {
public:

     string createmapping(string m)
     {
         char start='a';
         char mapping[128]={0};
         for(int i=0;i<m.size();i++)
         {
             char ch=m[i];
             if(mapping[ch]==0)
             {
                 mapping[ch]=start;
                 start++;
             }
         }
         for(int i=0;i<m.size();i++)
         {
             char ch=m[i];
             m[i]=mapping[ch];
         }
        cout<<m;
        return m;
     }
    
    
    string mapping(string m)
    {
        char start='a';
        char mapping[128]={0};
        for(int i=0;i<m.size();i++)
        {
            char ch=m[i];
            if(mapping[ch]==0)
            {
                  mapping[ch]=start;
                start++;
            }
            
        }
        for(int i=0;i<m.size();i++)
        {
              char ch=m[i];
              m[i]=mapping[ch];
        }
        cout<<m;
        return m;
    }
    
    bool isIsomorphic(string s, string t) {
        

    // string p=createmapping(s);
    // string a=createmapping(t); 
         string p=mapping(s);
    string a=mapping(t); 
       
    if(p==a)
    {
        return true;
    }
    else
     return false;

    


    }
};