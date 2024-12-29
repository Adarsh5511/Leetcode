class Solution {
public:
 const int MOD = 1e9 + 7;

    int solve(int i, int j, vector<vector<long long>>& freq, string& target, vector<vector<int>>& dp, int k) {
        if (i == target.size()) {
            return 1;
        }
        if (j == k) {
            return 0; 
        }

        if (dp[i][j] != -1) {
            return dp[i][j];
        }

  
        int not_taken = solve(i, j + 1, freq, target, dp, k);

     
        int taken = 0;
        if (freq[target[i] - 'a'][j] > 0) {
            taken = (freq[target[i] - 'a'][j] * solve(i + 1, j + 1, freq, target, dp, k)) % MOD;
        }

      
        return dp[i][j] = (not_taken + taken) % MOD;
    }

    int numWays(vector<string>& words, string target) {
        int m = target.length();
        int k = words[0].length();

      
        vector<vector<long long>> freq(26, vector<long long>(k, 0));
        for (int col = 0; col < k; col++) {
            for (string& word : words) {
                char ch = word[col];
                freq[ch - 'a'][col]++;
            }
        }

        vector<vector<int>> dp(m, vector<int>(k, -1));

       
        return solve(0, 0, freq, target, dp, k);
    }
};