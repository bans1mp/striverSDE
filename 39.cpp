class Solution {
public:
    vector<vector<int>> res ;

    void solve(int idx , vector<int> &curr , int target , vector<int> &c){
        if(target == 0){
            res.push_back(curr) ;
            return ;
        }
        if(target < 0) return ;
        if(idx == c.size()) return ;

        solve(idx + 1 , curr , target , c) ;
        curr.push_back(c[idx]) ;
        solve(idx , curr , target - c[idx] , c) ;
        curr.pop_back() ;
        return ;
        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr ;
        res.clear() ;
        solve(0 , curr , target , candidates) ;
        return res ;
    }
};
