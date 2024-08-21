//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
   bool isprime(int n) {
    if (n <= 1) {
        return false; 
    }
    if (n <= 3) {
        return true; 
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false; 
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; 
        }
    }

    return true;
}
  
    int isTwistedPrime(int N) {
        // code here
        
        int ans1=isprime(N);
        int n=N;
        int no=0;
        while(n!=0){
            int digit=n%10;
            no=no*10+digit;
            n=n/10;
        }
        // cout<<no;
    int ans2=isprime(no);
    if(ans1==true && ans2==true){
        return true;
    }
    return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isTwistedPrime(N) << "\n";
    }
}
// } Driver Code Ends