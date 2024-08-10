//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int minener(int index,vector<int>&height,vector<int>&dp)
    {
        if(index==0)
        {
            return 0;
        }
        // if(index<0)
        // return 0;
        
        if(dp[index]!=-1) return dp[index];
        
        int left=minener(index-1,height,dp)+abs(height[index]-height[index-1]);
        
        int right=INT_MAX;
        if(index>1)
         right=minener(index-2,height,dp)+abs(height[index]-height[index-2]);
        
        
        return dp[index]=min(left,right);
    }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        int index=height.size()-1;
        vector<int>dp(n+1,-1);
        
        int ans=minener(index,height,dp);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends