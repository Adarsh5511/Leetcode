//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        set<int>ans;
        
        for(auto it:arr1)
        {
            mp1[it]++;
        }
        for(auto it:arr2)
        {
            mp2[it]++;
        }
        for(auto it:arr3)
        {
            if(mp1.find(it)!=mp1.end() && mp2.find(it)!=mp2.end())
            {
                ans.insert(it);
            }
        }
        
        if(ans.empty()) ans.insert(-1);
        
        vector<int>v(ans.begin(),ans.end());
        return v;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends