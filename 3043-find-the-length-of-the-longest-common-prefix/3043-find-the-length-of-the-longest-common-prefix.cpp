class Solution {
public:
    
    
//    void checkprefix(string temp1,string temp2,int &maxcount){
       
//        int i=0;
//        int j=0;
//        int count=0;
       
//        while(i<temp1.size() && j<temp2.size()){
           
//            if(temp1[i]==temp2[j]){
//                count++;
//            }
//            else{
//                break;
//            }
//            i++;
//            j++;
           
//        }
//        maxcount=max(maxcount,count);
       
       
//    }
    
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        
        
//         int maxcount=0;
//         for(int i=0;i<arr1.size();i++){
            
//             string temp1=to_string(arr1[i]);
            
//             for(int j=0;j<arr2.size();j++){
//                 // int count=0;
                
//                 string temp2=to_string(arr2[j]);
//                 checkprefix(temp1,temp2,maxcount);
//             }
//         }
//         return maxcount;
        
        unordered_set<int>allprefix;
        for(auto i:arr1){
            
            while(!allprefix.count(i) && i>0){
                
                allprefix.insert(i);
                i=i/10;
            }
            
        }
        
        int maxlen=0;
        for(auto i:arr2){
            
            while(!allprefix.count(i) && i>0){
                i=i/10;
            }
            
            if(i >0){
                maxlen=max(maxlen,static_cast<int>(log10(i)+1));
            }
        }
        
        
        
       
        
        
        return maxlen;
        
        
    }
};