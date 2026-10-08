class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b = 0, s = 1;
        int target = 0;
        while (s < prices.size()){
            if (prices[b] < prices[s]){
                int profit = prices[s] - prices[b];
                target = max(target,profit);
            }
            else{
                b = s;
            }
            s++;
        }
        return target;
    }
};
