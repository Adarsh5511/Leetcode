//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
  
  
   bool isSum(int index,vector<int>&arr,int sum, vector<vector<int>>&dp)
    {
        if(sum==0) return true;
       if(index==0)
       {
           if(sum==0 || arr[index]==sum) return true;
           else
          return false;
           
         
       }
       
       if(dp[index][sum]!=-1) return dp[index][sum];
      
       bool right=isSum(index-1,arr,sum,dp);
      
      bool left=0; 
      if(arr[index]<=sum) 
      left=isSum(index-1,arr,sum-arr[index],dp);
      
     
      
      return dp[index][sum]=left||right;
    }
    
    
    bool isSubsetSum(vector<int>arr, int sum){
        
      
     vector<vector<int>>dp(arr.size(),vector<int>(sum+1,-1));  
     int index=arr.size()-1;
     return isSum(index,arr,sum,dp);
      
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends