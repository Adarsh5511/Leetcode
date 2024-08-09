class Solution {
public:

//    bool arelastk_1charsame(string &ans,int k,char value)
//    {
    

//      int it=ans.size()-1;

//      for(int i=0;i<k;i++)
//      {
//          if(value !=ans[it]) {return false ;}
//          it--;
//      }
//      return true;
   
 


//    }
    string removeDuplicates(string s, int k) {
        string ans;
      vector<pair<char, int>> st;
     for(int i=0;i<s.size();i++)
     {
         if(!st.empty() && st.back().first==s[i])
         {
             st.back().second++;
             
         }
         else{
             st.push_back({s[i],1});
         }
         
         if(st.back().second==k)
         {
             st.pop_back();
         }
     }
        
        for(auto p : st){
          int count=p.second;
            while(count>0)
            {
                ans.push_back(p.first);
                count--;
            }
        }
        // return result;
   
   return ans;
    } 
 
    
};
