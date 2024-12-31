class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
           int round=0;
           unordered_map<int,int>mp;
           for(auto i:tasks)
           {
            mp[i]++;
           }
           for(auto i:mp)
           {
            cout<<i.first<<" "<<i.second<<endl;
           }
           for(auto i:mp)
           {
               if(i.second==2)
               {
                 mp[i.first] -= 2;
                 round++;
               }
               else if(i.second>2)
               {
                  int no=i.second;
                  
                  while(no)
                  {
                    if(no==1 )
                    {
                        break;
                    }
                     if(no==0 )
                    {
                        break;
                    }

                    if(no==2 || no==4)
                    {
                        no=no-2;
                          mp[i.first] -= 2;
                        round++;
                    }
                     else if(no>=3)
                     {
                        no=no-3;
                          mp[i.first] -= 3;
                        round++;

                     }
                  }
               }
           }
           for(auto i:mp)
           {
            if(i.second!=0)
            {
                 return -1;
            }
           }
           return round;

    }
};