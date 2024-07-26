//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int maxs(int index,int arr[],int n,vector<int>&dp)
    {
        if(index==0) return arr[index];
        if(index<0)
        {
            return 0;
        }
        if(dp[index]!=-1) return dp[index];
        
        int pick=arr[index]+maxs(index-2,arr,n,dp);
        
        int nonpick=0+maxs(index-1,arr,n,dp);
        
       dp[index]= max(pick,nonpick);
       
       return dp[index];
        
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int index=n-1;
        vector<int>dp(n,-1);
        int ans=maxs(index,arr,n,dp);
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
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends