class Solution {
public:
    int minAddToMakeValid(string s) {
       
       stack<int>st;
       int minlen=0;
       int count=0;
        for(int i=0;i<s.size();i++)
        {
              char ch=s[i];
              if(s[i]=='(')
              {
                  st.push(i);
                  count++;


              }
              else
              {
                  
                 
                  if(!st.empty())
                  {
                       st.pop();
                      
                      count--;
                  }
                  else
                  {
                      count++;
                  }
              }

        }

        return count;
    }
};