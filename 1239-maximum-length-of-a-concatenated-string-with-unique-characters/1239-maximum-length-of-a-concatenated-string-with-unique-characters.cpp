class Solution {
public:
    
    bool isunique(string s1,string s2){
        
        for(auto i:s1){
            
            for(auto j:s2){
                if(i==j){
                    return false;
                }
            }
        }
        
       
          for(int i=0;i<s2.size();i++){
            
            for(int j=0;j<s2.size();j++){
                
                if(i!=j){
                if(s2[i]==s2[j]){
                    return false;
                }
                }
            }
            
        }
        
        return true;
    }
    
    
    int maxl(int index,vector<string>& arr,string &ans){
        
        if(index>=arr.size()){
            return ans.size();
        }
        
        
        int take=INT_MIN;
        if(isunique(ans,arr[index])){
               string original_ans = ans; // Save the current state for backtracking
            ans += arr[index]; // Append the current string to ans
            take = maxl(index + 1, arr, ans);
            ans = original_ans; 
           
                   
        }
        int nottake=0+maxl(index+1,arr,ans);
       
       return max(take,nottake);
        
        
    }
    
    
    int maxLength(vector<string>& arr) {
        
        string ans;
        int a=maxl(0,arr,ans);
        return a;
        
        
    }
};