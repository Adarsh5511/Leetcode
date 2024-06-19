class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans;
        // stack<char>st;
        int count=0;
        
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='(')
           {
               count+=1;
               cout<<count<<" |";
               
               if(count!=1)
               {
                   ans.push_back(s[i]);
               }
              
           }
         else if(s[i]==')')
          {
             
             count-=1;
             cout<<count<<" --";
             if(count!=0)
             {
                 ans.push_back(s[i]);
             }
             
             
          }
        }
        
        return ans;
        
        
    }
};