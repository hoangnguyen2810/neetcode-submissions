class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b = 0, s = 1;
        int res = 0;
        while (s < prices.size()){
            if (prices[b] < prices[s]){
                res = max(res,prices[s] - prices[b]);
            }
            else{
                b = s;
            }
            s++;
        }
        return res;
    }
};
