class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0 ;
        int mtr = prices[prices.size() - 1] ;
        for(int i = prices.size() - 2 ; i >= 0 ; i--){
            mtr = max(mtr , prices[i+1]) ;
            res = max(res , mtr - prices[i]) ;
        }
        return res ;
    }
};
