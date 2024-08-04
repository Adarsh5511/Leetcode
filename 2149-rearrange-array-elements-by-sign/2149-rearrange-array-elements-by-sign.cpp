class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
       
        vector<int>pos;
        vector<int>neg;
        vector<int>mix;
        for(auto no:nums)
        {
            if(no>=0)
            {
                pos.push_back(no);
            }
            else{
                neg.push_back(no);
            }
        }
        
        int i=0;
        int j=0;
       while(i<pos.size() || j<neg.size())
       {
           mix.push_back(pos[i]);
           mix.push_back(neg[j]);
           i++;
           j++;
       }
        return mix;
        
        
    }
};