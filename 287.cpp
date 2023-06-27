class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            int k = abs(nums[i])-1 ;
            if(nums[k] < 0) return k+1 ;
            nums[k] = -1*nums[k] ;
        }
        return 0 ;
    }
};
