class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(buy>prices[i]){
                buy=prices[i];
            }
            else {
                profit=max(profit,prices[i]-buy);
            }
        }
        return profit;
    }
};