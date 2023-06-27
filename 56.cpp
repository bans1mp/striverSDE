class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res ;
        sort(intervals.begin() , intervals.end()) ;
        res.push_back(intervals[0]) ;
        
        for(int i = 1 ; i < intervals.size() ; i++){
            auto &curr = res.back() ;
            auto x = intervals[i] ;
            cout<<curr[0]<<" "<<curr[1]<<endl ;
            if(x[0] > curr[1]){
                res.push_back(x);
            }
            else{
                if(x[1] <= curr[1]) continue ;
                else{
                    curr[1] = x[1] ;
                    
                }
            }
        }
        return res ;
    }
};
