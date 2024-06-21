class Solution {
public:
    
    
    bool ispalindrome(string &s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start]!=s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        
        return true;
    }
    
    
    void partion(int index, vector<vector<string>> &st,vector<string>&temp,string &s)
    {
        if(index==s.size())
        {
           
            st.push_back(temp);
            return;
        }
        
        for(int i=index;i<s.size();i++)
        {
            if(ispalindrome(s,index,i))
            {
                temp.push_back(s.substr(index,i-index+1));
                partion(i+1,st,temp,s);
                temp.pop_back();
                
            }
        }
        
        
      
        
    }
    
    vector<vector<string>> partition(string s) {
        
        
         vector<vector<string>>st;
         vector<string>temp;
         int index=0;
        
        
         partion(index,st,temp,s);
        
        return st;
        
        
    }
};