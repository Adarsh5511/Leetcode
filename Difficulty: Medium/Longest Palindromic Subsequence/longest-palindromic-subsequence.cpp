//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  
    int longestpalisubseq(int index1,int index2,string s1,string s2,vector<vector<int>>&dp)
    {
        
        if(index1<0 || index2<0)
        {
            return 0;
        }
        
        if(dp[index1][index2]!=-1) return dp[index1][index2];
        if(s1[index1]==s2[index2])
        return 1+longestpalisubseq(index1-1,index2-1,s1,s2,dp);
        
        return dp[index1][index2]=0+max(longestpalisubseq(index1-1,index2,s1,s2,dp),longestpalisubseq(index1,index2-1,s1,s2,dp));
    }
    
    string reverse1(string a)
    {
        int i=0;
        int j=a.size()-1;
        // string b=a;
        while(i<j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
        return a;
    }
    
    int longestPalinSubseq(string A) {
        //code here
         string B=reverse1(A);
         
         int n=A.size();
         int index1=n-1;
         int index2=n-1;
         vector<vector<int>>dp(n,vector<int>(n,-1));
         int ans= longestpalisubseq(index1,index2,A,B,dp);
         return ans;
        
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends