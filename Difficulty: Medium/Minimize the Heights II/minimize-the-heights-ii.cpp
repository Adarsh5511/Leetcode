//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        
        sort(arr.begin(),arr.end());
        int ans=arr[arr.size()-1]-arr[0];
        int smallest=arr[0]+k;
        int largest=arr[arr.size()-1]-k;
        int mini=0;
        int maxi=0;
        for(int i=0;i<arr.size();i++)
        {
            
            
            mini=min(smallest,arr[i+1]-k);
           
        
            maxi=max(largest,arr[i]+k);
            
            if(mini<0){
                
                continue;
                
            }
            
            ans=min(ans,maxi-mini);
            
        }
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends