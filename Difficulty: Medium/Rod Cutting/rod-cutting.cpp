//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
    int maxvalue(int index,int price[] ,int n, vector<vector<int>>&dp)
    {
        
        
        if(index==0)
        {
          
            if(index<=n)
            {
                return (n-index)*price[index];
            }
            else
            return 0;
        }
        if(dp[index][n]!=-1) return dp[index][n];
        
        int notpick=0+maxvalue(index-1,price,n,dp);
        
        int pick=INT_MIN;
        if(index+1<=n)
        {
            pick=price[index]+maxvalue(index,price,n-(index+1),dp);
        }
        
        return  dp[index][n]=max(pick,notpick);
    }
    
    int cutRod(int price[], int n) {
        //code here
        
        int index=n-1;
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        
        // int wt[n];
        // for(int i=0;i<n;i++)
        // {
        //     wt[i]=i;
        // }
        int ans=maxvalue(index,price,n,dp);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends