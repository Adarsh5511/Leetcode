//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  
    void reverse(vector<int>&arr,int start,int end)
    {
        while(start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int> &arr) {
        // code here
       int n=arr.size();
       reverse(arr,0,n-1);
       reverse(arr,1,arr.size()-1);       

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.rotate(arr);
        for (long long i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends