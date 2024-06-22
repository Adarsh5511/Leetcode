class Solution {
public:
    
//     bool insert(vector<int>& nums1,vector<int>& nums2,int j,vector<int>&ans)
//     {
//         for(int k=j;k<nums2.size();k++)
//                             {
//                                 if(nums2[k]>nums2[j])
//                                 {
                                    
//                                      ans.push_back(nums2[k]);
//                                     return true;
//                                 }
                                
                               
//                             }
//         return false;
//     }
    
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>st;
        vector<int>ans;
        unordered_map<int,int>greater;
        
        
        for(int i=nums2.size()-1;i>=0;i--)
        {
            
            if(st.empty())
            {
                greater[nums2[i]]=-1;
                st.push(nums2[i]);
            }
            
            else if(st.top()>=nums2[i])
            {
                greater[nums2[i]]=st.top();
                st.push(nums2[i]);
                
            }
            else if(st.top()<nums2[i]){
                
                while(!st.empty() && st.top()<nums2[i]){
                        st.pop();
                }
                if(st.empty())
                greater[nums2[i]]=-1;
                else{
                      greater[nums2[i]]=st.top();
                }
                st.push(nums2[i]);
                
                
                
            }
            
            
        }

       
        for(auto num:nums1){
            ans.push_back(greater[num]);
            
        }
        
        return ans;
    }
    
//      vector<int>help=nums2;
//         sort(help.begin(),help.end());
//         int max=help.back();
//         bool flag=false;
       
        
        
//         vector<int>ans;
//         for(int i=0;i<nums1.size();i++)
//         {
          
//             for(int j=0;j<nums2.size();j++)
//             {
//                 if(nums1[i]==nums2[j])
//                 {
                      
//                     if(j==nums2.size()-1)
//                     {
//                         cout<<nums2[j];
//                         ans.push_back(-1);
//                     }
//                     else if(nums2[j]==max)
//                     {
//                         cout<<nums2[j];
//                         ans.push_back(-1);
//                     }
//                     else 
//                     {
//                         if(nums2[j+1]>nums2[j])
//                         {cout<<nums2[j];
//                          ans.push_back(nums2[j+1]);
//                         }
//                         else{
                            
                            
//                             bool flag=insert(nums1,nums2,j,ans);
                            
//                             if(flag==false)
//                             {
//                                 ans.push_back(-1);
//                             }
                            
                            
                            
//                         }
                             
//                     }
//                 }
               
                
//             }
//         }
};