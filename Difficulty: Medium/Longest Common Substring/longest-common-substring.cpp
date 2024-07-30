//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:


    // int findcss(int i,int j,string &s1,string &s2)
    // {
    //     if(i<0 || j<0)
    //     {
    //         return 0;
    //     }
        
        
        
        
    //     if(s1[i]==s2[j])
    //     return 1+findcss(i-1,j-1,s1,s2);
        
    //     if(s1[i]==s2[j-1] && s1[i-1]==s2[j-2])
    //     return findcss(i,j-1,s1,s2);
        
    //     else if(s1[i-1]==s2[j] && s1[i-2]==s2[j-1])
    //     return findcss(i-1,j-1,s1,s2);
        
        
        
    // }
   
    int longestCommonSubstr(string s1, string s2) {
        // your code here

        int n=s1.size();
        int m=s2.size();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int j=0;j<=m;j++)  dp[0][j]=0;
      
        
         for(int i=0;i<=n;i++)  dp[i][0]=0;
         
          
         int ans=0;
         for(int i=1;i<=n;i++)
         {
             for(int j=1;j<=m;j++)
             {
                 if(s1[i-1]==s2[j-1]){ 
                     
                     int val=1+dp[i-1][j-1];
                     dp[i][j]=val;
                 ans=max(ans,val);
                 }
                 
                 else dp[i][j]=0;
                 
             }
         }
        
        
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends