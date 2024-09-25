//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
         vector<bool> prime(N+1, true);
         vector<int>ans;

    // Mark 0 and 1 as non-prime numbers
    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= N; p++) {
        // If prime[p] is true, then p is a prime number
        if (prime[p]) {
            // Update all multiples of p to false (non-prime)
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    // cout << "Prime numbers up to " << n << " are: ";
    for (int p = M; p <= N; p++) {
        if (prime[p]){
            ans.push_back(p);
    }
    }
    return ans;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends