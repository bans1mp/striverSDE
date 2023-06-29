class Solution {
public:
    vector<vector<int>> res ;

    void solve(int idx , vector<int> &nums, int n){
        
        if(idx == n){
            res.push_back(nums) ;
            return ;
        }
        for(int i = idx + 1 ; i < n ; i++){
            swap(nums[i],nums[idx]) ;
            solve(idx+1 , nums , n) ;
            swap(nums[i],nums[idx]) ;

        }
        solve(idx +1 , nums , n) ;
        return ;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        res.clear() ;
        int n = nums.size() ;
        solve(0, nums , n) ;
        return res ;
    }
};
