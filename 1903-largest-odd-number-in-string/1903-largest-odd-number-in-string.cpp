class Solution {
public:
    string largestOddNumber(string num) {
        

        
       
        
        int part=0;
       for(int i=num.size();i>=0;i--)
       {
           char ch=num[i];
           int no=ch-'0';
           if(no%2==1)
           {
              return num.substr(0,i+1);
           }
       }
        
       
    
        return "";
        
        
    }
};