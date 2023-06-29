class Solution {
public:
    vector<vector<int>> res ;
    void solve(int i , vector<int> &c , vector<int> &curr , int target){
        if(target == 0){
            res.push_back(curr) ;
            return ;
        }
        if(target < 0) return ;
        if(i == c.size()) return ;
        int nxt = i+1 ;
        while(nxt < c.size() && c[nxt] == c[i]) nxt++ ;
        solve(nxt , c , curr , target); 
        curr.push_back(c[i]) ;
        solve(i+1 , c , curr , target-c[i]) ;
        curr.pop_back() ;
        return ;
    }

    // 1 1 2 5 6 7 10

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr ;
        res.clear() ;
        sort(candidates.begin() , candidates.end()) ;
        solve(0,candidates,curr,target) ;
        return res ;
    }
};
