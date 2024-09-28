class Solution {
public:
    long long validSubstringCount(string word1, string word2) {
         long long count=0;

        int left=0;
        unordered_map<char,int>targetmap;
        for(auto i:word2){
            targetmap[i]++;
        }

        int requiredmatches=targetmap.size();
        
        unordered_map<char,int>windowmp;
        int currentmatches=0;

        for(int right=0;right<word1.size();right++){
            
            char ch=word1[right];
            

            if(targetmap.find(ch)!=targetmap.end()){
              
              windowmp[ch]++;

              if(windowmp[ch]==targetmap[ch]){
                currentmatches++;
              }

            }

            while(currentmatches==requiredmatches){

                count+=word1.size()-right;

                char leftch=word1[left];
                if(targetmap.find(leftch)!=targetmap.end()){

                       if(windowmp[leftch]==targetmap[leftch]){
                   
                                currentmatches--;
                        }
                        windowmp[leftch]--;

                
                }

                left++;

            }
        }

        return count;
    }
    
};