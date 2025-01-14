class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
        

     vector<int> ans(A.size());
        unordered_set<int> setA;
        
      
        for (int i = 0; i < A.size(); i++) {
           
            setA.insert(A[i]);
            
          
            int count = 0;
            for (int j = 0; j <= i; j++) {
                if (setA.find(B[j]) != setA.end()) {
                    count++;
                }
            }
            ans[i] = count;
        }
        
        return ans;
    }
};