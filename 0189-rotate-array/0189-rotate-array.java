class Solution {
    
    static void reverse(int []nums,int s,int e)
    {
        int start=s;
        int end=e;
        while(start<end)
        {
            int temp=nums[end];
            nums[end]=nums[start];
            nums[start]=temp;
            start++;
            end--;
        }
        
    }
    public void rotate(int[] nums, int k) {
        
        k=k%nums.length;
        int n=nums.length;
        
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
}