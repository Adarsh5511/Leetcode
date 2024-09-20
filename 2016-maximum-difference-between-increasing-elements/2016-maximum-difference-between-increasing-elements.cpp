class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
//         int maxi=0;
//         bool flag=false;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 int diff=nums[j]-nums[i];
//                 maxi=max(diff,maxi);
//                 flag=true;
//             }
//         }
//         if(flag)return true;
        
//         return -1;
        
          int maxi = 0;
        bool flag = false;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(maxi<(nums[j]-nums[i])){
                    maxi = nums[j]-nums[i];
                    flag = true;
                }
            }
        }
        if(flag)return maxi;
        return -1;
    }
};