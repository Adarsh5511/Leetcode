class Solution {
public:
    
   
    int pivotInteger(int n) {
        
        for(int i=0;i<=n;i++)
        {
            int sumleft=0;
            int sumright=0;
            
            for(int j=0;j<=i;j++)
            {
                    sumleft+=j;
            }
            
            for(int k=i;k<=n;k++)
            {
                sumright+=k;
                
            }
            
            if(sumleft==sumright)
            {
                return i;
            }
            
                
            
        }
        return -1;
        
        
        
    }
};