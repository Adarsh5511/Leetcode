//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method*/
    
    bool match(int index1,int index2,string patt,string s2,vector<vector<int>>&dp){
        
        if(index1<0 && index2<0) return true;
        
        if(index1<0 && index2>=0) return false;
        
        if(index1>=0 && index2<0)
        {
            for(int i=0;i<index1;i++)
            {
                if(patt[i]!='*') return false;
            }
            
            return true;
        }
        
        if(dp[index1][index2]!=-1) return dp[index1][index2];
        
        if(patt[index1]==s2[index2] || patt[index1]=='?'){
           return dp[index1][index2]=match(index1-1,index2-1,patt,s2,dp);
        }
        else if(patt[index1]=='*') 
        return dp[index1][index2]= match(index1-1,index2,patt,s2,dp)|| match(index1,index2-1,patt,s2,dp);
        
        return false;
        
    }
    
    
    int wildCard(string pattern, string str) {
        
        vector<vector<int>>dp(pattern.size(),vector<int>(str.size(),-1));
        int index1=pattern.size()-1;
        int index2=str.size()-1;
        int i=0;
        int j=0;
        bool ans=match(index1,index2,pattern,str,dp);
        return ans;
        
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