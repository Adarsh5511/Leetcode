class Solution {
public:
    
    bool ispalindrome(vector<char>s){
        
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string makestring(long long forw){
        
         string temp;
        if(forw==0){
            char ch='0';
            temp.push_back(ch);
            return temp;
        }
      
            while(forw!=0){
                int digit=forw%10;
                char ch=digit+'0';
                temp.push_back(ch);
                forw=forw/10;
            }
       
        reverse(temp.begin(),temp.end());
        // for(auto i:temp)
        //     cout<<i;
        
        return temp;
    }
    
    
//     string nearestPalindromic(string n) {
        
        
//         long long num=0;
//         for(int i=0;i<n.size();i++){
//             int digit=n[i]-'0';
//             num=num*10+digit;
            
//         }
        
//         int count1=0;
//         int count2=0;
        
//         bool backward=false;
//         bool forward=false;
        
//         long long forw=num+1;
//         long long back=num-1;
        
//         while(true && back>=0){
//             vector<char>temp;
//             count1++;
//             long long t=back;
//             while(t!=0){
//                 int digit=t%10;
//                 char ch=digit+'0';
//                 if(ch!='/'){
//                 temp.push_back(ch);}
//                 t=t/10;
//             }
            
            
            
//             if(ispalindrome(temp)){
//                 backward=true;
//                 break;
//             }
//             back--;
            
//         }
        
        
//         while(true){
            
//             if(backward==true && count2>=count1){
//                 break;
//             }
//             vector<char>temp;
//             count2++;
//             long long t=forw;
//             while(t!=0){
//                 int digit=t%10;
//                 char ch=digit+'0';
//                 if(ch!='/'){
//                 temp.push_back(ch);}
//                 t=t/10;
//             }
            
//             if(ispalindrome(temp)){
//                 forward=true;
//                 break;
//             }
//             forw++;
            
//         }
       
//         if(forward==true && backward==true){
            
//             long long diff1=num-back;
//             long long diff2=forw-num;
//             if(diff1<=diff2){
              
//                 return makestring(back);
//             }
//             else{
//                   // cout<<"diff1";
//                  return makestring(forw);
//             }
//         }
       
       
//         return makestring(back);
        
//         // return " ";
        
//     }
    string nearestPalindromic(string n) {
        int len = n.size();
        long long num = stoll(n);
        
        // Edge cases for very small and very large numbers
        vector<long long> candidates;
        candidates.push_back(pow(10, len) + 1);  // "100...001"
        candidates.push_back(pow(10, len - 1) - 1);  // "99...99"

        // Middle palindrome generation
        long long prefix = stoll(n.substr(0, (len + 1) / 2));
        vector<long long> temp = {prefix - 1, prefix, prefix + 1};
        
        for (long long p : temp) {
            string p_str = to_string(p);
            string rev_p = string(p_str.rbegin(), p_str.rend());
            
            // Even length palindromes
            candidates.push_back(stoll(p_str + rev_p.substr(len % 2)));
            
            // Odd length palindromes
            candidates.push_back(stoll(p_str + rev_p.substr(1)));
        }

        // Finding the closest palindrome
        long long closest = -1;
        for (long long candidate : candidates) {
            if (candidate != num) {
                if (closest == -1 || abs(candidate - num) < abs(closest - num) || 
                    (abs(candidate - num) == abs(closest - num) && candidate < closest)) {
                    closest = candidate;
                }
            }
        }
        
        return to_string(closest);
    }
};