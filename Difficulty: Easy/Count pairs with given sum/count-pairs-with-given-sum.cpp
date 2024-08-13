//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    
    
    int getPairsCount(const vector<int>& arr, int k) {
        // code here
        int count=0;
        unordered_map<int,int>mp;
        // int left=0;
        // int sum=arr[0];
        // int right=0;
        // while(right<arr.size())
        // {
        //     while(left<=right & sum>k)
        //     {
        //         sum-=arr[left];
        //         left++;
        //     }
        //     if(sum==k)
        //     {
        //         count=count+2;
        //     }
            
        //     right++;
        //     if(right<arr.size()) sum+=arr[right];
        // }
        // return count;
        // int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            int  value=k-arr[i];
            if(mp[value])
            {
                count+=mp[value];
            }
            mp[arr[i]]++;
            
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int k;

        cin >> k;
        cin.ignore(); // Ignore the newline character after k

        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getPairsCount(arr, k);
        cout << ans << "\n";
    }

    return 0;
}
// } Driver Code Ends