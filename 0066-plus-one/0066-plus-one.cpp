class Solution {
public:
//     vector<int> plusOne(vector<int>& digits) {
        
// //         vector<int>ans;
        
// //        long long int num=0;
// //         for(auto i:digits){
            
// //             int digit=i;
// //             num=num*10+digit;
// //         }
// //         // cout<<num;
// //         num=num+1;
// //         while(num!=0){
            
// //           long long int digit=num%10;
// //             ans.push_back(digit);
// //             num=num/10;
// //         }
        
// //         reverse(ans.begin(),ans.end());
        
// //     
//         for(int i=0;i<digits.size();i++){
//             if(i==digits.size()-1){
//                 digits[i]++;
//             }
//             if(digits[i]==10){
//                 digits[i]=0;
//                 if(i!=0){
//                     digits[i-1]++;
//                 }
//                 else{
//                     digits.push_back(0);
//                     digits[i]=1;
//                 }
//             }
//         }
//         return digits;
        
//     }  
    vector<int> plusOne(vector<int>& v) {
    int n = v.size();
        for(int i = n-1; i >= 0; i--){
            if(i == n-1)
                v[i]++;
            if(v[i] == 10){
                v[i] = 0;
                if(i != 0){
                    v[i-1]++;
                }
                else{
                    v.push_back(0);
                    v[i] = 1;
                }
            }
        }
        return v;
    }
};