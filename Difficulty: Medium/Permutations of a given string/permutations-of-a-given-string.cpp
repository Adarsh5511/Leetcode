//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void  permuterecur(set<string>&ans,string &t,int freq[],string S,int n)
	{
	    if(t.size()==n)
	    {
	        ans.insert(t);
	        return;
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(!freq[i])
	        {
	            t.push_back(S[i]);
	            freq[i]=1;
	             permuterecur(ans,t,freq,S,n);
	             freq[i]=0;
	             t.pop_back();
	            
	        }
	    }
	}
	
	
		vector<string>find_permutation(string S)
		{
		 
		    // Code here there
		    set<string>ans;
		      string temp = "";
		
		    int n=S.size();
		    int freq[S.size()];
		    
		    for(int i=0;i<S.size();i++){
		        freq[i]=0;
		        
		    }
		    
		  
		    
		    permuterecur(ans,temp,freq,S,n);
		    
		    vector<string>ans_vector(ans.begin(),ans.end());
		    
		    return ans_vector;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends