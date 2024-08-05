class Solution {
public:
    int solve(string &w1,string &w2,int i,int j,vector<vector<int>>&dp)
    {
        
        
        if(i<0)
        {
//             require insett operns to convert s1 to s2
            return j+1;
            
        }
        if(j<0)
        {
//             requred count to delete from s1 to convert to s2
            return i+1;
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        if(w1[i]==w2[j])
        {
            
            return  0+solve(w1,w2,i-1,j-1,dp);
        }

        
        int op=min(1+solve(w1,w2,i-1,j-1,dp),1+solve(w1,w2,i-1,j,dp));
        return dp[i][j]=min(op,1+solve(w1,w2,i,j-1,dp));
       
    }
    int minDistance(string word1, string word2) {
        
        vector<vector<int>>dp(word1.size(),vector<int>(word2.size(),-1));
        int i=word1.size()-1;
        int j=word2.size()-1;
       int ans=solve(word1,word2,i,j,dp);
       return ans;
        
        
    }
};