//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
  int coinchange(int index,vector<int> &coins,int target, vector<vector<int>>&dp)
    {
        //  if(target==0)
        //   {
        //       return 1;
        //   }
        if(index==0)
        {
            if(target%coins[index]==0) return target/coins[index];
        //   if(coins[index]==target)
        //   {
        //       return 1;
        //   }
           else
           return 1e9;
        }
        
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        int notpick=0+coinchange(index-1,coins,target,dp);
        int pick=INT_MAX;
        if(coins[index]<=target)
        {
            pick=1+coinchange(index,coins,target-coins[index],dp);
        }
        
        
        return dp[index][target]=min(notpick,pick);
        
    }
	
	int minCoins(vector<int> &coins, int M, int V) 
	{ 
	    // Your code goes here
	   int index=coins.size()-1;
	   vector<vector<int>>dp(M,vector<int>(V+1,-1));
	  int ans=coinchange(index,coins,V,dp);
	  if(ans>=1e9)
	  return -1;
	  else
	  return ans;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        vector<int> coins(m);
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends