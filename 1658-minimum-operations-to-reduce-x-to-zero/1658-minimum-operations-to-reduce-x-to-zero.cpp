class Solution {
public:
    
    
   
    
    int minOperations(vector<int>& nums, int x) {
          int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int target = totalSum - x;
        
        // If the target is negative, it's impossible to achieve x by removing elements
        if (target < 0) return -1;
        
        // If the target is 0, we need to remove the entire array
        if (target == 0) return nums.size();
        
        // Sliding window to find the longest subarray that sums to target
        int left = 0, currentSum = 0, maxLength = -1;
        
        for (int right = 0; right < nums.size(); ++right) {
            currentSum += nums[right];
            
            // Shrink the window if the sum exceeds the target
            while (currentSum > target && left <= right) {
                currentSum -= nums[left];
                left++;
            }
            
            // Check if we've found a valid subarray
            if (currentSum == target) {
                maxLength = max(maxLength, right - left + 1);
            }
        }
        
        // If we found a valid subarray, return the number of operations (total length - subarray length)
        return (maxLength == -1) ? -1 : nums.size() - maxLength;
    }
        
    
};