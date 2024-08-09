class Solution {
public:
    
    bool validpali(string s)
    {
        int i=0;
        int j=s.size()-1;
       int  count=1;
        
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else{
               
                    
                    if(count>0){
                        j--;
                        count--;
                    }
                  
                
               if(s[i]!=s[j])
               {
                   return false;
               }
                
            }
        }
        return true;
        
    }
    
    
    bool validpli(string s)
    {
         int i=0;
        int j=s.size()-1;
       int  count=1;
        
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else{
               
                    if(count>0){
                        i++;
                        count--;
                    }
                        
                  
                
               if(s[i]!=s[j])
               {
                   return false;
               }
                
            }
        }
        return true;
    }
    
    
    bool validPalindrome(string s) {
        
       bool ans1=validpali(s);
        bool ans2=validpli(s);
        
        if(ans1 || ans2)
        return true;
        else
            return false;
    }
};