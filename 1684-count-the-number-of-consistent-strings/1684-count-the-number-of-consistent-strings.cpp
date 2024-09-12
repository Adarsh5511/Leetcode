class Solution {
public:
    

    
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int count=0;
        map<char,int>mp;
        for(auto it:allowed){
            mp[it]++;
        }
        
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            bool flag=true;
            for(int j=0;j<temp.size();j++){
                
                char ch=temp[j];
                if(mp.find(ch)==mp.end()){
                    flag=false;

                    break;
                }
                
                
            }
            if(flag==true){
                count++;
            }
            
            
        }
        
        return count;
        
        
        }
        
        
    
};