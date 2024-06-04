class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     
    unordered_set<int>set1(nums1.begin(),nums1.end());
        
        unordered_set<int>common;
        for(auto el:nums2)
        {
            if(set1.contains(el))
            {
              common.insert(el);
            }
        }
        
        vector<int>ans(common.begin(),common.end());
//     
        
        return ans;
        
        
        
        
        
    }
    
    
    // set<int>ans;
//         vector<int>ans1;
        
//         for(int i=0;i<nums1.size();i++)
//         {
//             count[nums1[i]++];
//         }
        
        
//       // unordered_map<int,int>::iterator it=count.begin();
        
//         for(auto i:count)
//         {
//                  cout<<i.first<<" "<<i.second;
//         }
        
//       for(int i=0;i<nums2.size();i++)
//       {
        
// //           if(count.find(nums2[i])!=count.end())
// //           {
              
// //           
          
//           for(auto it=count.begin();it!=count.end();it++)
//           {
//               if(it->first==nums2[i])
//               {
//                   ans.insert(nums2[i]);
//               }
              
//           }
//       }
        
//         for(std::set<int>::iterator it=ans.begin();it!=ans.end();it++)
//         {
//             ans1.push_back(*it);
//         }
};