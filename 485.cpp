class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0 ;
        int curr = 0 ;
        for(auto x : nums){
            if(x == 0){
                res = max(res , curr) ;
                curr =0 ;
            }
            else curr++ ;
        }
        res = max(res , curr);
        return res ;
    }
};
