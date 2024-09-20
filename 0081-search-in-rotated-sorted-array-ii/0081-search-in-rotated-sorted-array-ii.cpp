class Solution {
public:
   
    int findpivotindex(vector<int>& nums)
    {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;

        while(s<=e)
        {
             if(s==e)
            return e;

            else if(mid>=0 && (nums[s] == nums[mid]) && (nums[e] == nums[mid]))
            {
                s++;
                e--;
                if(s>e)
                return s;
            }
           
           
            else if(mid+1<n && nums[mid]>nums[mid+1])
            return mid;

            else if(mid-1>=0 && nums[mid-1]>nums[mid])
            return mid-1;
         
        //    else if(nums[13]==2)
        //    {
        //        mid=2;
        //        return mid;
        //    }
           
           
            // else if(nums[s]>=nums[mid] && nums[s]<=nums[mid])
            // return mid;

            //  else if(nums[mid]==nums[mid+1] && nums[mid]!=nums[mid-1])
            //  e=mid-1;

             else if(nums[s]> nums[mid])
            e=mid-1;

            else 
            s=mid+1;


             mid=s+(e-s)/2;

        }
        return -1;
    }

    int binarysearch(vector<int>& nums,int s,int e,int target)
    {
        int mid=s+(e-s)/2;

        while(s<=e)
        {

            if(target==nums[mid])
            return mid;

            

            else if(target>nums[mid])
            s=mid+1;

            else
            e=mid-1;

            mid=s+(e-s)/2;
        }
        return -1;
    }
   

    bool search(vector<int>& nums, int target) {

          int s=0;
        int e=nums.size()-1;
        
        while(s<=e){
            int mid=(s+e)/2;
            
            if(nums[mid]==target) return true;
            
            // if(nums[mid]==nums[s] && nums[mid]==nums[e]){
            //     s++;
            //     e--;
            //     continue;
            // }
              if (nums[mid] == nums[s] && nums[mid] == nums[e]) {
            s++;
            e--;
            continue;
        }
            
            if(nums[s]<=nums[mid]){
                
                if(nums[s]<=target && target<=nums[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
                
            }
            else{
              
                if(target>=nums[mid] && target<=nums[e]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }

       return false;

        }
        
        


        
    
};