//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        //code here.
        string ans=str;
        int i=0;
        int j=str.size()-1;
        while(i<=j)
        {
            if(isalpha(ans[i]) && !isalpha(ans[j]))
            {
                j--;
            }
            else if(isalpha(ans[j]) && !isalpha(ans[i]))
            {
                i++;
            }
           else if(isalpha(ans[i]) && isalpha(ans[j]))
            {
                swap(ans[i],ans[j]);
                    i++;
                    j--;
              
            }
            else if(!isalpha(ans[i]) && !isalpha(ans[j])){
                i++;
                j--;
            }
           
           
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends