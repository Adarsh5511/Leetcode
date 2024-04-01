class Solution {
public:
    int lengthOfLastWord(string s) {
        string temp=s;
//         stack<char>st;
//         // int len=0;
        
//         for(auto ch:s)
//         { 
            
//             if(ch==' ')
//             {
//                 if(!st.empty())
//                 {
//                     // len=0;
//                 while(!st.empty())
//                 {
//                     st.pop();
//                 }
//                 }
//             }
       
        
//             else
//             {
//                 st.push(ch);
//                 // len++;
//             }
           
//     }
        
       
      
        
//           if(st.size()==0)
//           {
              
//           }
//         else
//         {
//             return st.size();
//         }
        
        
        
        int count=0;
        
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                count++;

            }
            else
            {
                if(count>0)
                {
                    return count;
                }
            }
            
        }
       
        return count;
        
    }
};