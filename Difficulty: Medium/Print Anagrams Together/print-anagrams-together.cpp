//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
      unordered_map<string,vector<string>>mp;
      
    //   vector<string>stl(string_list.begin(),string_list.end());
    //   sort(stl.begin(),stl.end());
      
      vector<vector<string>>ans;
      for(auto i:string_list){
          
          string sorted_str=i;
          sort(sorted_str.begin(),sorted_str.end());
          mp[sorted_str].push_back(i);
      }
      
      for(auto entry:mp){
          ans.push_back(entry.second);
      }
      
    
  
    //   vector<string>tempo;
    //   for(auto i:stl){
          
    //       string temp=i;
    //       sort(temp.begin(),temp.end());
          
    //       bool same=true;
    //       if(mp.find(temp)!=mp.end()){
    //         if(tempo.size()==0){
    //             // cout<<i;
    //             tempo.push_back(i);
    //         }
    //         else{
    //             string g=tempo.back();
    //             // cout<<g;
    //             sort(g.begin(),g.end());
    //             if(temp==g){
    //                 tempo.push_back(i);
    //             }
    //             else{
    //                 ans.push_back(tempo);
    //                 while(tempo.size()!=0){
    //                     tempo.pop_back();
    //                 }
    //                 tempo.push_back(i);
    //             }
    //         }
            
    //       }
      
      
     
    //   sort(ans.begin(),ans.end());
      
      
      return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends