//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    
    int recursive(string s,int last,int i)
    {
        if(!isdigit(s[last]))
        {
            return -1;
        }
        if(last==i)
        {
            return s[last]-'0';
        }
        
      int recans=recursive(s,last-1,i);
      
      int a=s[last]-'0';
      
      return recans*10+a;
        
    }
    
    int checkvalid(string s,int i)
    {
         while(i<s.size())
       {
         
           if(!isdigit(s[i]))
           {
               return -1;
           }
           
           i++;
       }
       return 1;
       
        
    }
    
    
    
    int atoi(string s) {
        //Your code here
        int i=0;
        int sign=1;
        
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        int j=i;
      
        int ans1=checkvalid(s,j);
        if(ans1==-1)
        {
            return ans1;
        }
        
        
        int last=s.size()-1;
        int ans=recursive(s,last,i);
        
        if(ans==-1)
        {
            return ans;
        }
        else
        return  sign*ans;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		int ans=ob.atoi(s);
		cout<<ans<<endl;
	}
}
// } Driver Code Ends