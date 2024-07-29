//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
 int givemaxway(int index,int w,int wt[],int val[], vector<vector<int>>&dp)
    {
       
        if(index==0)
        {
            if(wt[index]<=w)
            {
               int capable=w/wt[0];
               return val[0]*capable;
            }
            else 
            {
                return 0;
            }
        }
        
        if(dp[index][w]!=-1) return dp[index][w];
        
        int notpick=0+givemaxway(index-1,w,wt,val,dp);
        
        int pick=0;
        if(wt[index]<=w)
        {
            pick=val[index]+givemaxway(index,w-wt[index],wt,val,dp);
        }
        
        return  dp[index][w]=max(pick,notpick);
        
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        if(N==1)
        {
            if(wt[0]<W)
            {
                return wt[0]*val[0];
            }
            else
            return 0;
        }
        vector<vector<int>>dp(N,vector<int>(W+1,-1));
        int index=N-1;
        int ans=givemaxway(index,W,wt,val,dp);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends