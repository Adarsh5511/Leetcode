//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[256]={0};
        
        for(int i=0;i<str.size();i++)
        {
            arr[str[i]]++;
            
        }
        int maxcount=INT_MIN;
        char maxChar = '\0';
        
        for(int i=0;i<256;i++)
        {
            if(arr[i]>0)
            {
                if(maxcount<arr[i])
                {
                    maxcount=arr[i];
                    maxChar=char(i);
                }
            }
        }
        
      
        
        return maxChar;
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends