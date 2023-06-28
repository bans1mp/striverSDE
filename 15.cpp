class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        set<vector<int>> s ;
        vector<vector<int>> res ;
        for(int k = 0 ; k < nums.size() ; k++){
            int i = k+1 ;
            int j = nums.size() - 1 ;
            while(i < j){
                int sum = nums[k] + nums[i] + nums[j] ;
                if(sum > 0) j-- ;
                else if(sum < 0) i++ ;
                else{
                    s.insert({nums[k] , nums[i] , nums[j]}) ;
                    i++ ;
                    j-- ;
                } 
            } 
        }
        for(auto x : s) res.push_back(x) ;
        return res ;
    }
};
