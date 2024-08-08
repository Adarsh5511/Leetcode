class Solution {
public:
    string reverseWords(string s) {
   
        string result;
        int n=s.size();
        vector<char>ans;
        int i=0;
        int j=0;
      

        while(i<n)
        {
            while(i<n && s[i]==' ')
            {
                i++;
            }
            if(i>=n) break;
            j=i+1;
            while(j<n && s[j]!=' ')
            {
                j++;
            }
          string  word=s.substr(i,j-i);
            if(result.size()==0)
            {
                result=word;
            }
            else
                result=word+" "+result;
            
            i=j+1;
            
        }
        

        return result;
   
    }
};