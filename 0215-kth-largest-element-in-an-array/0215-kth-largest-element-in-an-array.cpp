class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int>arr=nums;
        vector<int>ans;
        
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-1;i<arr.size();i--)
        {
            ans.push_back(arr[i]);
        }
        
        return ans[k-1];
        
    }
};