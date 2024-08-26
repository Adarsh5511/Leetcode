//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:


    void mergeintervals(vector<vector<int>>& intervals,vector<vector<int>>&ans){
        
       
       
        for(auto i:intervals){
          
            if(ans.empty()){
                ans.push_back(i);
                
            }
            else{
                
            //   if(ans.back()[0]>i[0] && ans.back()[0]<i[1]){
            //       ans.back()[0]=i[0];
                   
            //   }
               if(ans.back()[1]>=i[0]){
                   
                    ans.back()[1] = max(ans.back()[1], i[1]);
               }
               else{
                   ans.push_back(i);
               }
            }
        }
        
    }

    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         sort(intervals.begin(),intervals.end());
          vector<vector<int>>ans; 
         mergeintervals(intervals,ans);
         return ans;
         
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends