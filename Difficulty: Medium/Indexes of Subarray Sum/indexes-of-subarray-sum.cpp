//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        // Your code here
        
      
        
        vector<int>ans;
        int left=0,right=0;
        long long sum=arr[0];
        if(s==0)
             { 
                 int zeroit=0;
                 while(zeroit<arr.size())
                 {
                     if(arr[zeroit]==0)
                     {
                          ans.push_back(zeroit+1);
                            ans.push_back(zeroit+1);
                            return ans;
                     }
                     zeroit++;
                 }
                 ans.push_back(-1);
                 return ans;
             }
        while(right<arr.size())
        {
             
            while(left<=right && sum>s)
            {
                sum-=arr[left];
                left++;
            }
           
            // if(left>right)
            // {
            //     ans.push_back(-1);
            //     return ans;
            // }
            if(sum==s)
            {
                ans.push_back(left+1);
                ans.push_back(right+1);
                return ans;
            }
            
            right++;
            if(right<n) sum+=arr[right];
            
        }
        
        ans.push_back(-1); return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends