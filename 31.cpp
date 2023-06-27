class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() ;
        int i = n-2 ;
        while(i >= 0 && nums[i] >= nums[i+1]) i-- ;
        if(i == -1){
            reverse(nums.begin() , nums.end()) ;
            return ;
        }
        int r = i+1 ;
        for(int j = i+1 ; j < n ; j++){
            if(nums[j] > nums[i]) r = j;
        }
        swap(nums[i] , nums[r]) ;
        reverse(nums.begin() + i + 1 , nums.end()) ;
        return ;
    }
};
