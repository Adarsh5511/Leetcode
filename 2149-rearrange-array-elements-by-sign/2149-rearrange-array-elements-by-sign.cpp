class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>arrneg;
        vector<int>arrpos;
        vector<int>nums1=nums;
        vector<int>ans;
        int i=0;
        int j=0;
        while(i<nums1.size())
        {
            if(nums1[i]>=0)
            {
                arrpos.push_back(nums1[i]);
            }
            else if(nums1[i]<0)
            {
                arrneg.push_back(nums1[i]);
            }
            i++;
        }
        int k=0;
        int l=0;
        while(j<nums.size()/2)
        {
            ans.push_back(arrpos[k]);
            ans.push_back(arrneg[l]);
            k++;
            l++;
            j++;
            
        }
        
        return ans;
        
        
        
    }
};