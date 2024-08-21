//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        int count=0;
        int i=0;int j=0;
        while(i<A.size() && j<B.size()){
            char ch1=toupper(A[i]);
            char ch2=toupper(B[j]);
            if(ch1==ch2)
            {
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.sameChar(A,B)<<endl;
    }
    return 0;
}
// } Driver Code Ends