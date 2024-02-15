//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends




// deque<long long>dq;
    
//       for(int i=0;i<K;i++)
//       {
//             if(A[i]<0)
//             {
//                 dq.push_back(i);
//             }
//       }
        
       
//         for(int i=K;i<N;i++)
//     {
          
//             if(dq.empty())
//               {
//                   ans.push_back(0);
//               }
//           else
           
//               { 
//                   ans.push_back(A[dq.front()]);
//               }
        
          
           
//           if(i-dq.front()>=K)
//           {
//               dq.pop_front();
              
//           }
//           if(A[i]<0)
//           {
//               dq.push_back(i);
//             //   cout<<i<<"ans ";
//           }
//     }
    
//       if(dq.empty())
//       {
//           ans.push_back(0);
//       }
//       else
//       {
//           ans.push_back(A[dq.front()]);
//       }
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
                                                 
    vector<long long>ans;
     deque<long long > dq;
    // process first k elements
    for (int i = 0; i < K; i++)
    {
        int ele = A[i];
        if (ele < 0)
            dq.push_back(i);
    }
    // print ans

    // process remaining window
    //  ->removal and addition
    for (int i = K; i < N; i++)
    {
        if (dq.empty())
            ans.push_back(0);
        else
        {
            ans.push_back( A[dq.front()]) ;
        }
        // purani window ka ans->
        // cout << arr[dq.front()] << " ";
        // removal
        // out of range index ko q mai se remove krdo
       
        if (!dq.empty() && i - dq.front() >= K)
            dq.pop_front();

        // addition
        if (A[i] < 0)
        {
            dq.push_back(i);
        }
    }
    // last window ka alag se process kro
    if (dq.empty())
            ans.push_back(0);
        else
        {
            ans.push_back( A[dq.front()]) ;
        }
    
    
        return ans;
                                                     
 }