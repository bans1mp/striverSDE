class Solution {
public:

    vector<vector<int>> res ;

    void solve(int i , vector<int> &nums , vector<int> &curr){
        if(i == nums.size()){
            res.push_back(curr) ;
            return ;
        }
        int nxt = i+ 1 ;
        while(nxt < nums.size() && nums[nxt] == nums[i]) nxt++ ;
        solve(nxt , nums , curr) ;
        curr.push_back(nums[i]) ;
        solve(i+1 , nums , curr ) ;
        curr.pop_back() ;
        return ;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        res.clear() ;
        vector<int> curr ;
        sort(nums.begin() , nums.end()) ;
        solve(0 , nums , curr) ;
        return res ;
    }
};
