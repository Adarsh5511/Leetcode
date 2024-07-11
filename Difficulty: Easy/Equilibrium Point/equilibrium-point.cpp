//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
        int n=arr.size();
        if(n==1){
            return 1;
        }
       
        int total=0;
      
       
       for(int i=0;i<n;i++){
           total +=arr[i];
       }
       int leftcount=0;
       for(int j=0;j<n;j++){
          
           int rightcount=total-leftcount-arr[j];
           if(leftcount==rightcount){
               return j+1;
           }
            leftcount +=arr[j];
       }
        
        return -1;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<long long> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
    }
}
// } Driver Code Ends