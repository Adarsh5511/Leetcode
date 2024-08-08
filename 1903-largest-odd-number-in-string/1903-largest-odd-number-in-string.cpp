class Solution {
public:
    string largestOddNumber(string num) {
        

        
        

       
        int maxindex=-1;
        for(int i=num.size()-1;i>=0;i--)
        {
          int n=num[i]-'0';
            if(n%2!=0)
            {
                maxindex=max(i,maxindex);
            }
        }
        
        if(maxindex==INT_MIN) return " ";
        else
            return num.substr(0,maxindex+1);
        
       
        
     

        
        
        
        
    
        
        
        
    }
};