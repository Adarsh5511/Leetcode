class Solution {
public:
   
//    void maxp(vector<int>&prices,int i,int &minprice,int &maxprofit)
//    {
//        if(i==prices.size()) return;
       
//        if(prices[i]<minprice) minprice=prices[i];
//        int todaysprofit=prices[i]-minprice;
//        if(todaysprofit>maxprofit)
//        {
//            maxprofit=todaysprofit;
//        }

//         maxp(prices,i+1,minprice,maxprofit);
//    }
          
    int maxProfit(vector<int>& prices) {
        
    int mini=prices[0];
    int profit=0;
        for(int i=1;i<prices.size();i++)
        {
           int cost=prices[i]-mini;
            profit=max(profit,cost);
            
            mini=min(prices[i],mini);
        }
        return profit;


    }
};