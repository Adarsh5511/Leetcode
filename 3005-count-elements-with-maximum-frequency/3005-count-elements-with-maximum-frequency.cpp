class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101]={0}, maxF=0;
    for(int i=0; i<nums.size(); i++){
        int x=nums[i];
        freq[x]++;
        maxF=(maxF<freq[x])?freq[x]:maxF;
    }
    int ans=0;
    for(int i=1; i<=100; i++){
        if (freq[i]==maxF) ans+=freq[i];
    }
    return ans;
    }
};