// class Solution {
// public:
//     string predictPartyVictory(string senate) {

//     //    int rc=0;
//     //    int dc=0;

//     //    for(auto i:senate)
//     //    {
//     //        if(i=='R')
//     //        {
//     //         rc++;
//     //        }
//     //        else{
//     //         dc++;
//     //        }
//     //    }
//     //    if(rc>dc)
//     //    {
//     //     return "Radiant";
//     //    }
//     //    else if(rc<dc)
//     //    {
//     //      return "Dire";
//     //    }
//     //    else if(rc==dc)
//     //    {
//     //       if(senate[0]=='R')
//     //       {
//     //              return "Radiant";
//     //       }
//     //       else{

//     //           return "Dire";

//     //       }
//     //    }

            
//     //   return " ";

//        unordered_map<char,int>mp;
//     //    for(auto i:senate)
//     //    {
//     //     mp[i]++;
//     //    }
//        int skipr=0;
//        int skipd=0;
//        for(auto i:senate)
//        {
//           if(i=='R' && skipr==0)
//           {
              
//              mp[i]++;
//             //    if(mp.find('D')!=mp.end())
//             //   {
//             //     mp['D']--;
//             //   }
//             //   else{

//                 skipd++;

//             //   }
//           }
//           else if(i=='D' && skipd==0){
   
//               mp[i]++;
//             //   if(mp.find('R')!=mp.end())
//             //   {
//             //     mp['R']--;
//             //   }
//             //   else{
                 
//               skipr++;
//             //   }

//           }
//           else if(i=='R' && skipr!=0)
//           {
//             skipr--;
//           }
//           else if(i=='D' && skipd!=0)
//           {
//               skipd--;
//           }
//        }
//        int rc=0;
//        int dc=0;
//        for(auto i:mp)
//        {
//            if(i.first=='R')
//            {
//               rc=i.second;
//            }
//            else{
//              dc=i.second;
//            }
//        }
      
//        if(rc>dc)
//        {
//          return "Radiant";
//        }
//        else if(rc<dc){
//         return "Dire";
//        }
//        else if(rc==dc)
//        {
//           if(senate[0]=='D')
//           {
//             return "Dire";
//           }
//           else{
//             return "Radiant";
//           }
//        }

//        return "";

//     }


// };
class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        int rCount = 0, dCount = 0;
        int rBan = 0, dBan = 0;  

        while (true) {
            for (int i = 0; i < n; ++i) {
                if (senate[i] == 'R') {
                    if (rBan > 0) {
                      
                        senate[i] = 'X';
                        --rBan;
                    } else {
                       
                        ++dBan;
                        ++rCount;
                    }
                } else if (senate[i] == 'D') {
                    if (dBan > 0) {
                    
                        senate[i] = 'X';
                        --dBan;
                    } else {
                       
                        ++rBan;
                        ++dCount;
                    }
                }
            }

          
            if (rCount == 0) return "Dire";
            if (dCount == 0) return "Radiant";

         
            rCount = 0;
            dCount = 0;
        }
    }
};
