class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int maxi=INT_MIN;
        vector<int>st(values.size(),0);
        int maxxi=INT_MIN;
        for(int i=0;i<values.size();i++)
        {
            int value=values[i]+i;
            maxxi=max(value,maxxi);
            st[i]=maxxi;
            
        }
       
       for(int j=1;j<values.size();j++)
       {
           
               int value=(st[j-1])+values[j]-j;
         
               maxi=max(value,maxi);
          
           
       }
        
        return maxi;
    }
};