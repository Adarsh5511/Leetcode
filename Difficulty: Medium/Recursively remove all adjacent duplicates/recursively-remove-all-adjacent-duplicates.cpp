//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    string rd(string str)
    {
        int i=0;
        string ans;
        int n=str.length();
        while(i<n)
        {
            if(i<n-1 && str[i]==str[i+1])
            {
               while(i<n-1 && str[i]==str[i+1])
               {
                   i++;
               }
               
            }
            else{
                ans.push_back(str[i]);
            }
            i++;
        }
        return ans;
    }
      
    string rremove(string s) {
        // code here
        
        string copy=" ";
        while(s.length()!=copy.length())
        {
            copy=s;
            s=rd(copy);
        }
        return copy;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends