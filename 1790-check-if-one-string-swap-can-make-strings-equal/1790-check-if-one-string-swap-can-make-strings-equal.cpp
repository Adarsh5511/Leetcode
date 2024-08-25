class Solution {
public:
    
    bool isvalid(string s1,string s2){
        
        int i=0;
        int j=0;
        while(i<s1.size() && j<s2.size()){
            if(s1[i]!=s2[j]){
                return false;
            }
            i++;
            j++;
        }
        return (i==s1.size() && j==s2.size());
    }
    
    
    bool swapping(string s1,string s2){
        
        bool flag=false;
        if(isvalid(s1,s2)){
            return true;
        }
        for(int i=0;i<s2.size();i++){
            
            for(int j=i+1;j<s2.size();j++){
                
                swap(s2[i],s2[j]);
               if(isvalid(s1,s2)){
                   return true;
               }
                swap(s2[i],s2[j]);
            }
        }
        return false;
        
    }
    
    bool areAlmostEqual(string s1, string s2) {
        
        return swapping(s1,s2);
        
    }
};