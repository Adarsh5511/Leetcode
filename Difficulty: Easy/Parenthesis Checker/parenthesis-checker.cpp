//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    
    bool valid(stack<char>&st,string s){
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')
            {
                st.push(s[i]);
            }
            
            else if((!st.empty()) && ((s[i]=='}' && st.top()=='{') || (s[i]==')'&& st.top()=='(') || (s[i]==']'&& st.top()=='[')  )){
                
                
                 st.pop();
                
                
            }
            
            else {
             return false;
               
            }
            
            i++;
            
        }
        if(st.empty()){
            return true;
        }
        else
        return false;
        
    }
    bool ispar(string x)
    {
        // Your code here
        stack<char>st;
        return valid(st,x);
        
      
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends