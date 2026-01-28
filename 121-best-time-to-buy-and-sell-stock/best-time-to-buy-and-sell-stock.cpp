class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int profit=0;
        int currprofit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            else{
                currprofit=prices[i]-minprice;
                if(currprofit>profit){
                    profit=currprofit;
                }
            }
        }
        return profit;
    }
};