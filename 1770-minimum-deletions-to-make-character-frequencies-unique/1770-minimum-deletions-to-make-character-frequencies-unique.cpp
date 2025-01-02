class Solution {
public:

    int check(vector<int>&freq,int &count,int size){
    for(int i=0;i<26;i++)
        {
            
            for(int j=0;j<26;j++)
            {
                if(i!=j)
                {
                    if(freq[i]==freq[j])
                    {
                        if(freq[i]!=0)
                        {
                            cout<<freq[i];
                             freq[i]=freq[i]-1;
                             count++;
                            check(freq,count,size);
                        }
                       
                    }
                }
                
            }
        }

     return count;
  
    }


    
   
    int minDeletions(string s) {
        
      int size=0;
      unordered_set<char>se;
      for(auto i:s)
      {
          se.insert(i);
      }
      size=se.size();
      cout<<size;
          

         vector<int> freq(26, 0);

        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        int count=0;
        int ans=check(freq,count,size);
        return ans;
        



    }
};