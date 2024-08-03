//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  
   int Buysellstock(int index,int buy,vector<int>&prices,int profit,vector<vector<int>>&dp)
   {
       
       if(index==prices.size())
       return 0;
       
       if(dp[index][buy]!=-1) return dp[index][buy];
       if(buy){
           profit=max(-prices[index]+Buysellstock(index+1,0,prices,profit,dp),(0+Buysellstock(index+1,1,prices,profit,dp)));
       }
       else{
            profit=max(prices[index]+Buysellstock(index+1,1,prices,profit,dp),(0+Buysellstock(index+1,0,prices,profit,dp)));
       }
       
       return dp[index][buy]=profit;
   }
    
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        vector<vector<int>>dp(n,vector<int>(2,-1));
        int profit=0;
      return Buysellstock(0,1,prices,profit,dp);
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends