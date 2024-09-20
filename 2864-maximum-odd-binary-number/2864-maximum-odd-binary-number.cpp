class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int i=0;
        
        int j=s.size()-1;
        int k=s.size()-2;
        
//         while(i<s.size()  && k>=0 ){
            
//             while(j==s.size()-1 && k>0 ) {
              
//             if(s[j]=='0' &&  s[k]=='1' ){
               
//                  swap(s[j],s[k]);
//                 j--;
              
//                 break;
//             }
            
//              else if (s[j]=='1'){
//                 j--;
//                  break;
//             }
//                 else{
//                k--;
//             }
//             }
            
           
            
//              while (i < j) {
//             // Skip over '1's in the left side
//             while (i < s.size() && s[i] == '1' ) {
//                 i++;
//             }
            
            
//             if(s[i]=='0' && s[j]=='1' && i<j){
//                swap(s[i],s[j]);
//                 i++;
//                 j--;
//             }
//             else{
//                 j--;
//             }
           
           
            
//         }
        int ones=0;
        for(char ch:s){
            if(ch=='1'){
                ones++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(ones>1){
                s[i]='1';
                ones--;
            }
            else{
                s[i]='0';
            }
        }
        s[s.size()-1]='1';
        return s;
    }
};