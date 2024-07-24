//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
   
    bool isperftsq(int ps)
    {
        int no=sqrt(ps);
        return no*no==ps;
     
    }
 
    string checkFibonacci(int N){
        // code here 
      int ps1=((5*N*N)-4);
      int ps2=((5*N*N)+4);
      
      if(isperftsq(ps1) || isperftsq(ps2))
      {
          return "Yes";
      }
      return "No";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends