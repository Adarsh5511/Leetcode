class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        
        
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            ans.push_back(nums2[i]);
        }
        
        sort(ans.begin(),ans.end());
            
        int start=0;
        int end=ans.size()-1;
        int mid= (start+end)/2;
        
            // cout<<ans.size()%2;
        
        if(ans.size()%2==0)
        {
          double median=(ans[mid]+ans[mid+1])/2.0;
            // cout<<ans[mid]<<" "<<ans[mid+1];
            return median;
            
        }
        else
        {
            // cout<<mid;
             return ans[mid];
        }
    }
};