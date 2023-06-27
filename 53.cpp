class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mth = nums[0];
        int meh = 0;
        for(auto x : nums){
            meh += x ;
            mth = max(meh , mth);
            if(meh < 0) meh = 0 ;
            
        }
        return mth ;
    }
};
