//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        
    //     set<int>ans;
    //     vector<int>fans;
    //     for(int i=0;i<arr1.size();i++)
    //     {
    //         int no=arr1[i];
    //         for(int j=0;j<arr2.size();j++)
    //         {
    //             if(arr1[i]<arr2[0]) break;
                
    //             if(arr1[i]==arr2[j]){
    //                 ans.insert(arr1[i]);
    //             }
    //         }
    //     }
        
        
    //     if(ans.empty()){
    //         fans.push_back(-1);
    //         return fans;
    //     }
    //   vector<int>vans(ans.begin(),ans.end());
        
    //     return vans;
    
      unordered_set<int>s1;
      for(auto it:arr1)
      {
          s1.insert(it);
          
      }
      set<int>result;
      for(auto it:arr2)
      {
          if(s1.find(it)!=s1.end())
          {
              result.insert(it);
          }
      }
      
      vector<int>ans(result.begin(),result.end());
      if(ans.empty())
      {
          ans.push_back(-1);
      }
      return ans;
        
    }
};

//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> arr1, arr2;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            arr1.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        // Function calling
        vector<int> v;
        v = ob.printIntersection(arr1, arr2);

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends