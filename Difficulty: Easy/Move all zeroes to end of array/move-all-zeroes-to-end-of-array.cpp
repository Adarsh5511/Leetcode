//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	   
	   
	    vector<int>zeros(n);
	    vector<int>nz(n);
	    
	  
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]!=0)
	       {
	             nz.push_back(arr[i]);
	          
	       }
	       else{
	          zeros.push_back(arr[i]);
	       }
	   }
	   
	  int count=0;
	      int j=0;
	      int k=0;
	   
	   for(j;j<nz.size();j++)
	   {
	     if(nz[j]!=0)
	     {
	      arr[k]=nz[j];
	      k++;
	      count++;
	     }
	   }
	  
	  while(k<n)
	  {
	      arr[k]=zeros[k];
	      k++;
	  }
	 
	   
	   
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends