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
    int i = nums2.size()-1;
        vector<int>ans(nums2.size(),-1);
    while (i >= 0)
    {

        int no = nums2[i];
        if (st.empty())
        {
            ans[i] = -1;
            st.push(no);
        }
        else
        {
            if (no < st.top())
            {
                ans[i] = st.top();
                st.push(no);
            }
            else if (no > st.top())
            {
                while (!st.empty() && st.top() <= no)
                {
                    st.pop();
                }
                if (!st.empty())
                {
                    ans[i] = st.top();
                    
                }
                else
                    ans[i] = -1;

                st.push(no);    
            }
        }
        i--;
    }
        
        vector<int>ans2;
    for(int i=0;i<nums1.size();i++){

        int no=nums1[i];
        for(int j=0;j<nums2.size();j++){
            if(nums2[j]==no){
               ans2.push_back(ans[j]);
                break;
            }
        }
    }
        return ans2;
        
    }
    

};