//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	   //int newarr[n];
	   //for(int i=0;i<n;i++)
	   //{
	   //    newarr[i]=arr[i];
	   //}
	   // sort(newarr.begin(),newarr.end());
	   
	   
	    vector<int>odd;
	    vector<int>even;
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2==0)
	        {
	           even.push_back(arr[i]);
	        }
	        else{
	            odd.push_back(arr[i]);
	        }
	       
	    }
	    
	  
	    sort(odd.begin(),odd.end());
	    sort(even.begin(),even.end());
	    int i=0;
	    for(i;i<even.size();i++)
	    {
	        arr[i]=even[i];
	    }
     	 int k=0;
	    for(i;i<n;i++)
	    {
	      
	        arr[i]=odd[k];
	        k++;
	    }
	    
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends