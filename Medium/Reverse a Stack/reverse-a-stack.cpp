//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

   void insert_at_bottom(stack<int> &St,int temp)
   {
       if(St.empty())
       {
           St.push(temp);
           return;
       }
       
       int element=St.top();
       St.pop();
       
       insert_at_bottom(St,temp);
       
       St.push(element);
       
   }

   
    void Reverse(stack<int> &St){
        
        // stack<int>ans;
        
        // while(!St.empty())
        // {
        //     int a=St.top();
        //     // cout<<a<<" ";
        //      ans.push(a);
        //     St.pop();
           
        // }
       
        // while(!ans.empty())
        // {
        //     int a=ans.top();
        //     St.push(a);
        //     ans.pop();
        // }
        
        if(St.empty())
        {
            return;
        }
        
        int temp=St.top();
        St.pop();
        
        Reverse(St);
        
        insert_at_bottom(St,temp);
        
        
        
        
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends