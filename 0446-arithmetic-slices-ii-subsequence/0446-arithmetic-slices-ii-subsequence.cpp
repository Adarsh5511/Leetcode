class Solution {
public:
    
    
//    bool checkas( vector<int>&temp){
//          int64_t diff = (int64_t)temp[1] - (int64_t)temp[0];
//        for(int i=0;i<temp.size();i++)
//        {
//            if(i+1<temp.size())
//            {
//                int64_t d = (int64_t)temp[i+1] - (int64_t)temp[i];
//                 if(d!=diff)
//                 {
//                     return false;
//                 }
//            }
          
//        }
//        return true;
       
//     }
    
    
    
    
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int result=0;
        vector<unordered_map<long,int>>dp(nums.size());
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                  long long diff = (long long)nums[i] - (long long)nums[j];
                dp[i][diff]+=1;
                
                if(dp[j].find(diff)!=dp[j].end())
                {
                    dp[i][diff]+=dp[j][diff];
                    result+=dp[j][diff];
                }
                
            }
        }
        return result;
    }
};