class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell = 0;
        int buy  = INT_MAX;
        
        for(int price : prices){
            if(buy<=price)//profit
            {   int profit= price-buy;
                sell = max(sell, profit);
             }
            else
                buy = price;
        }
        return sell;
        
    }
};