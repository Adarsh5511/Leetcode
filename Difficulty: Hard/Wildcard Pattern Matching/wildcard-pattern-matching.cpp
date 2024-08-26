//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method*/
    
    bool allstars(string s2,int i){
        for(int j=0;j<=i;j++){
            if(s2[j]!='*'){
                return false;
            }
        }
        return true;
    }
    
    bool match(string s1,string s2,int i,int j,vector<vector<int>>&dp){
        
        
        if(i<0 && j<0) return true;
        
        if(i<0 && j>=0) return false;
        
          if(i>=0 && j<0)
        {
            return allstars(s1,i);
        }
        
        
        if(dp[i][j]!=-1)return dp[i][j];
      
        if(s1[i]==s2[j]){
          return dp[i][j]=match(s1,s2,i-1,j-1,dp);
        }
        else if(s1[i]=='?'){
            return dp[i][j]= match(s1,s2,i-1,j-1,dp);
        }
        else if(s1[i]=='*'){
            return dp[i][j]=match(s1,s2,i-1,j,dp)||match(s1,s2,i,j-1,dp);
        }
        else{
            return false;
        }
        
    }
    
    int wildCard(string pattern, string str) {
        // code here
        vector<vector<int>>dp(pattern.size(),vector<int>(str.size(),-1));
        int i=pattern.size()-1;
        int j=str.size()-1;
         return match(pattern,str,i,j,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, text;
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text;
        Solution obj;
        cout << obj.wildCard(pat, text) << endl;
    }
}

// } Driver Code Ends