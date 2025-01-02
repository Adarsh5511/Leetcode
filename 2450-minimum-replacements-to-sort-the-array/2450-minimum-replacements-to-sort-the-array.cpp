class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {

      long long operations = 0;
        int n = nums.size();
        
        // Start from the second-to-last element and move leftward
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] > nums[i + 1]) {
                // Calculate the number of parts needed
                int parts = ceil((double)nums[i] / nums[i + 1]);
                
                // Update the next element (largest part after splitting)
                nums[i] = nums[i] / parts;
                
                // Increment operations by (parts - 1)
                operations += (parts - 1);
            }
        }
        
        return operations;
    }
};
