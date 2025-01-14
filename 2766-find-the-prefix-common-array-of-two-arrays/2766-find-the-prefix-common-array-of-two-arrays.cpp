class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
        

       set<int>st;
       vector<int>ans(A.size());
    
       for(int i=0;i<A.size();i++)
       {
         if(i==0)
         {
            if(A[i]==B[i])
            {
                ans[i]=1;
                
            }
            else{
                ans[i]=0;
            }
            st.insert(A[i]);
         }
         else{
            st.insert(A[i]);
          int count=0;
            for(int j=0;j<=i;j++)
            {
                if(st.contains(B[j]))
                {
                    count++;
                }
            }
            ans[i]=count;

         }
       }
       return ans;
    }
};