class Solution {
public:

  /*
   string ans="";
      cout<<s.length();
     int index=0;
     while(index<s.length())

     {
         if(ans.length() > 0 && ans[ans.length()-1]==s[index])
         {
             ans.pop_back();
         }
         else
         {
             ans.push_back(s[index]);
         }
       
       index++;
     

     }
  */
    string removeDuplicates(string s) {
        
//      stack<char>st;
//      string ans="";
    


//       for(int i=0;i<s.size();i++)
//       {
//           char ch=s[i];
//           if(st.empty())
//           {
//               st.push(ch);
//           }
//           else
//           {
//               if(!st.empty() && st.top()==ch )
//               {
//                   st.pop();

//               }
//               else
//               {
//                   st.push(ch);
//               }

//           }

//       }
     
//      while(!st.empty())
//      {
//         char s=st.top();
//         st.pop();
//         ans.push_back(s);
        
       
//      }
//         int i=0;
//         int j=ans.size()-1;
//         while(i<j)
//         {
//                 swap(ans[i],ans[j]);
//                 i++;
//                 j--;

//         }
        


      
   
//    return ans;
         string ans="";
      // cout<<s.length();
     int index=0;
     while(index<s.length())

     {
         if(ans.length() > 0 && ans[ans.length()-1]==s[index])
         {
             ans.pop_back();
         }
         else
         {
             ans.push_back(s[index]);
         }
       
       index++;
     

     }

return ans;
    }
};