class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int bars=0;
        sort(costs.begin(),costs.end());
        for(auto i:costs)
        {
            if(i<=coins)
            {
                bars++;
                coins-=i;
            }
        }
        return bars;

    }
};