//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to delete middle element of a stack.
    void delmidele(stack<int>&s,int sizeOfStack,int &midele){
        
        if(midele==1){
            s.pop();
            return;
        }
        
        int temp=s.top();
        midele--;
        // pos++;
        s.pop();
      
        delmidele(s,sizeOfStack,midele);
        
        s.push(temp);
        
        
    }
    
    
    void deleteMid(stack<int>& s, int sizeOfStack) {
      
        int size=s.size();
         int midele=0;
         
         if(size%2==0)
         {
             midele=(size)/2+1;
         }
         else{
             midele=(size+1)/2;
         }
       
         
     
        
        
        
        delmidele(s,sizeOfStack,midele);
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int sizeOfStack;
        cin >> sizeOfStack;

        stack<int> myStack;

        for (int i = 0; i < sizeOfStack; i++) {
            int x;
            cin >> x;
            myStack.push(x);
        }

        Solution ob;
        ob.deleteMid(myStack, myStack.size());
        while (!myStack.empty()) {
            cout << myStack.top() << " ";
            myStack.pop();
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends