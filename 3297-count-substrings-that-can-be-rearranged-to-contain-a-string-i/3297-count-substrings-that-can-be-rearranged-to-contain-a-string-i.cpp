class Solution {
public:

    

    long long validSubstringCount(string word1, string word2) {
        
      long long count = 0;
    
    // Frequency map of characters in word2
    unordered_map<char, int> targetFreq;
    for (char ch : word2) {
        targetFreq[ch]++;
    }
    
    // Variables to manage the sliding window
    unordered_map<char, int> windowFreq;
    int requiredMatches = targetFreq.size();  // Number of unique chars we need to match
    int currentMatches = 0;  // Number of chars matched so far
    int left = 0;  // Left pointer of the sliding window
    
    // Slide the window across word1 using the right pointer
    for (int right = 0; right < word1.size(); right++) {
        char rightChar = word1[right];
        
        // Add the current character to the window frequency
        if (targetFreq.find(rightChar) != targetFreq.end()) {
            windowFreq[rightChar]++;
            
            // If the frequency matches exactly, increase the number of matched characters
            if (windowFreq[rightChar] == targetFreq[rightChar]) {
                currentMatches++;
            }
        }
        
        // Check if the current window is valid (i.e., all characters from word2 are matched)
        while (currentMatches == requiredMatches) {
            // Every window from left to right is valid, so increment the count
            count += word1.size() - right;  // All substrings starting from 'left' to 'right' are valid
            
            // Now try to reduce the window size by moving the left pointer
            char leftChar = word1[left];
            if (targetFreq.find(leftChar) != targetFreq.end()) {
                if (windowFreq[leftChar] == targetFreq[leftChar]) {
                    currentMatches--;  // We are losing a valid match
                }
                windowFreq[leftChar]--;
            }
            left++;
        }
    }
    
    return count;
    }
};