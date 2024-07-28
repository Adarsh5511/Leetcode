//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int givemaxway(int index,int w,int wt[],int val[],int n, vector<vector<int>>&dp)
    {
        if(w==0)
        {
            return 0;
        }
        if(index==0)
        {
            if(wt[index]<=w)
            {
               return  val[index];   
            }
            else 
            {
                return 0;
            }
        }
        if(dp[index][w]!=-1) return dp[index][w];
        
        int notpick=0+givemaxway(index-1,w,wt,val,n,dp);
        
        int pick=0;
        if(wt[index]<=w)
        {
            pick=val[index]+givemaxway(index-1,w-wt[index],wt,val,n,dp);
        }
        
        return   dp[index][w]=max(pick,notpick);
        
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int index=n-1;
       vector<vector<int>>dp(n,vector<int>(W+1,-1));
      int ans= givemaxway(index,W,wt,val,n,dp);
       return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends