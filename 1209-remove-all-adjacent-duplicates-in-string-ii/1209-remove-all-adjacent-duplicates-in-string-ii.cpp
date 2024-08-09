class Solution {
public:

   bool arelastk_1charsame(string &ans,int k,char value)
   {
    

     int it=ans.size()-1;

     for(int i=0;i<k;i++)
     {
         if(value !=ans[it]) {return false ;}
         it--;
     }
     return true;
   
 


   }
    string removeDuplicates(string s, int k) {
        
    string ans="";
    
    

    
   for(int index=0;index<s.size();index++)
    {  
        //  char &value=s[index];
        
        if(ans.size()<k-1)
        ans.push_back(s[index]);

       else{

        if(arelastk_1charsame(ans,k-1,s[index]))
        {
            
           for(int j=0;j<k-1;j++)
            {    ans.pop_back();
            }               
        }
          else
        {
            ans.push_back(s[index]);
        }
       }
         
    }
       return ans;
    }

    }; 
 
    

