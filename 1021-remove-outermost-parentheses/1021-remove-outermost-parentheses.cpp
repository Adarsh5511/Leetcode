class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans;
        stack<char>st;
        
        for(int i=0;i<s.size();i++)
        {
           if(st.empty())
           {
               if(s[i]=='(')
               st.push(s[i]);
           }
         else if(!st.empty())
          {
              if(s[i]=='(')
              {     
              st.push(s[i]);
              ans.push_back(s[i]);
              }
              else if(s[i]==')')
              {
                    st.pop();
                  if(!st.empty())
                  {
                      ans.push_back(s[i]);
                  }
                    
              }
             
              
          }
        }
        
        return ans;
        
        
    }
};