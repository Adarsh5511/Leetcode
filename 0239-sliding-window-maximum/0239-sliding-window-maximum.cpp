class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>max;
        deque<int> dq;
        
        for(int i=0;i<k;i++)
        {
           int ele=nums[i];
            while(!dq.empty() && ele>nums[dq.back()])
            {
                 dq.pop_back();
            }
            dq.push_back(i);
            
        }
        
        for(int i=k;i<nums.size();i++)
        {
             max.push_back(nums[dq.front()]);
            
            if(i-dq.front()>=k)
            {
               dq.pop_front();
             }
             
           int ele=nums[i];
            
            while(!dq.empty() && ele>nums[dq.back()])
            {
                 dq.pop_back();
            }
            
            dq.push_back(i);
            
           
        }
        max.push_back(nums[dq.front()]);
        return max;
    }
};