class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit=0;
        int currprofit=0;
        int minprice=prices[0];

        for(int i=0;i<prices.size(); i++){
            minprice=min(minprice,prices[i]);
            currprofit=prices[i]-minprice;
            profit=max(currprofit,profit);
        }

        return profit;
        
    }
};