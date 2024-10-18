class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.size();
        int m = needle.size();
        if(n<m) return -1;
        int pos = haystack.find(needle);
        if (pos != string::npos) {
            return pos;
        }
        return -1;
        
    }
};