class Solution {
public:
    

    
    bool isPalindrome(string s) { 
        
//       int i=0;
//       int j=s.size()-1;
        
//         while(i<=j)
//         {
            
//         if((!isalpha(s[i])) )
//                         {
//                             i++;
//                         }
//          else if(!isalpha(s[j]) )
//                     {
//                         j--;
//                     }
            
   
//        else if (tolower(s[i])!=tolower(s[j]))
//             {
//                 return false;
//            }
//             else{
                                 
//                      i++;
//                      j--;
                
//             }
       
         

              

            

        
      
//       }
        
//         return true
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
            } else if (!isalnum(s[right])) {
                right--;
            } else if (tolower(s[left]) != tolower(s[right])) {
                return false;
            } else {
                left++;
                right--;
            }
        }

        return true;
    }
       

    
};