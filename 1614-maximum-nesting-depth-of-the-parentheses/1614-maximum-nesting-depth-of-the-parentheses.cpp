class Solution {
public:
    int maxDepth(string s) {
        
    stack<char>st;
        int maxcount=0;
        // int maxcount2=0;
        // int firstcount=0;
        int count=0;
        
        for(int i=0;i<s.size();i++)
        {
           

            if(s[i]=='(')
            {
                 
                 st.push(s[i]);
                 count++;
                  maxcount=max(count,maxcount);
//                 if(st.top()=='(')
//                 firstcount++;
                
                
//                 maxcount2=max(firstcount,maxcount2);
                
            }
            if(s[i]==')' && st.top()=='(')
            {
                
                st.pop();
                // firstcount=0;
                count--;
               
            }
            
           
            
        }
        return maxcount;

        
    }
};