class Solution {
public:
    
//M1--
//  sort(s.begin(), s.end());
//    sort(t.begin(),t.end());  
//    if(s==t)
//    {
//        return true;
//    }
//    else
//      return false;

//     }

    bool isAnagram(string s, string t) {

//     int frequencytable[256]={0};
//     for(int i=0;i<s.size();i++)
//     {
//         frequencytable[s[i]]++;
//     }

//       for(int i=0;i<t.size();i++)
//     {
//         frequencytable[t[i]]--;
//     }

//       for(int i=0;i<256;i++)
//     {
//         if(frequencytable[i]!=0)
//         {
//             return false;
//         }
//     }

//     return true;
        
        map<char,int>mp1;
        map<char,int>mp2;
        for(auto ch:s)
        {
            mp1[ch]++;
        }
        for(auto ch:t)
        {
            mp2[ch]++;
        }
        
        
       for(auto it:mp1)
       {
          if(mp2.find(it.first)!=mp2.end())
          {
              if(it.second!=mp2[it.first])
              {
                  return false;
              }   
          }
           else{
               return false;
           }
       }
         for(auto it:mp2)
       {
          if(mp1.find(it.first)!=mp1.end())
          {
              if(it.second!=mp1[it.first])
              {
                  return false;
              }   
          }
           else{
               return false;
           }
       }
        
        return true;
        


    }

};

