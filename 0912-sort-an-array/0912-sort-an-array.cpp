class Solution {
public:
    
    void heapify(vector<int>& nums, int index, int heapSize) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < heapSize && nums[left] > nums[largest]) {
            largest = left;
        }

        if (right < heapSize && nums[right] > nums[largest]) {
            largest = right;
        }

        if (largest != index) {
            swap(nums[index], nums[largest]);
            heapify(nums, largest, heapSize);
        }
    }
    
    void buildHeap(vector<int>& nums) {
        int n = nums.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, i, n);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        buildHeap(nums);

        int heapSize = nums.size();
        for (int i = heapSize - 1; i > 0; i--) {
            swap(nums[0], nums[i]);
            heapify(nums, 0, i);
        }

        return nums;
    }


};