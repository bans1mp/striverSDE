int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> mp ;
    int res = 0 ;
    if(B != 0) mp[0] = 1 ;
        
    int curr = 0 ;
    for(auto x : A){
        curr = curr^x ;
        
        res += (mp[curr^B]) ;
        mp[curr]++ ;
    }
    return res ;
}
