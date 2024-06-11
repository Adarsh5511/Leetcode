class Solution {
public:
    
    double powutil(double x, long n)
    {
       
        if(n==0) return 1.0;
        if(n==1) return x;
        if(n<0) return powutil(1/x,-n);
         double res=powutil(x*x,n/2);
        if(n%2==1) {
            res *=x;
        }
        return res;
    }
        
  
    
    double myPow(double x, int n) {
     
     return powutil(x,n);      
}
      };