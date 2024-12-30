class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int reqTime = 0;
        int maxTime = 0; 

        for (int i = 0; i < colors.size(); i++) {
           
            if (i > 0 && colors[i] == colors[i - 1]) {
               
                reqTime += min(maxTime, neededTime[i]);
                
                maxTime = max(maxTime, neededTime[i]);
            } else {
               
                maxTime = neededTime[i];
            }
        }

        return reqTime;
    }
};
