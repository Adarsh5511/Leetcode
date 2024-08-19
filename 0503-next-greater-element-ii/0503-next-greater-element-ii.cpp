class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
    vector<int>ans(nums.size(),-1);
        int n=nums.size();
        stack<int>st;
    
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<i+nums.size();j++){

//                 int index=(j%n);
                
//                 if(nums[index]>nums[i]){
//                   ans[i]=nums[index];
//                     break;
//                 }
//             }
        int i=n*2-1;
           while(i>=0){
               while(!st.empty() && st.top()<=nums[i%n]){
                  st.pop();
               }
               if(i<n){
                   if(!st.empty()){
                       ans[i]=st.top();
                   }
               }
               
               st.push(nums[i%n]);
               i--;
               
           }
        return ans;
        
        }
        
        
        
       
    
};