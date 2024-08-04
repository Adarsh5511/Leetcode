class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        int i=0;
        int j=0;
        
       vector<int>sums;
        for(int i=0;i<n;i++)
        {
             
            for(int j=0;j<n;j++)
            {
                int sum=0;
                for(int k=i;k<=j;k++)
                {
                    // cout<<nums[k];
                    sum+=nums[k];
                                 
                   if(k>=j)
                   {
                        sums.push_back(sum);
                   }
                   
                }
               

            }
        }
        
        long long ans=0;
        sort(sums.begin(),sums.end());
        for(int i=left-1;i<right;i++)
        {
            // cout<<sums[i]<<" ";
            ans+=sums[i];
        }
        
        return ans%1000000007;
    }
};