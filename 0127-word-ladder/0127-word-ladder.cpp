class Solution {
public:
    
   // bool check(string s1, string s2) {
   //      int count = 0;
   //      for (int i = 0; i < s1.size(); ++i) {
   //          if (s1[i] != s2[i]) {
   //              count++;
   //              if (count > 1) return false;
   //          }
   //      }
   //      return count == 1;
   //  }

    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        if (wordSet.find(endWord) == wordSet.end()) return 0;

        queue<pair<string, int>> q;
        q.push({beginWord, 1});

        while (!q.empty()) {
            string currentWord = q.front().first;
            int currentLength = q.front().second;
            q.pop();
            
            if(currentWord==endWord) return currentLength;
            for(int i=0;i<currentWord.size();i++)
            {
                char org=currentWord[i];
                for(char ch='a';ch<='z';ch++)
                {
                    currentWord[i]=ch;
                    if(wordSet.find(currentWord)!=wordSet.end())
                    {
                        q.push({currentWord,currentLength+1});
                        wordSet.erase(currentWord);
                        
                    }
                }
                currentWord[i]=org;
            }
          
        }
        return 0; 
    }
};