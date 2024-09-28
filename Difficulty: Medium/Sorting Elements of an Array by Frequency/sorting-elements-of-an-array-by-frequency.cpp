//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        vector<pair<int,int>>temp;
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        
        for(auto i:mp){
            temp.push_back(i);
        }
        
        sort(temp.begin(),temp.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second>b.second;
        });
       
   
    
    vector<int>ans;
    for(auto i:temp){
        
       for(int j=0;j<i.second;j++){
        ans.push_back(i.first);
       }
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

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends