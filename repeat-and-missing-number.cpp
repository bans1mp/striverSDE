vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long a = 0 ;
    long long b = 0 ;
    int n = A.size() ;
    for(auto x : A){
        a += x ;
        b += (x*x) ;
    }
    long long amb = ((n)*(n+1))/2 - a ;
    bool flag = false ;
    if(amb < 0) flag = 1 ;
    long long asmbs = ((n)*(2*n+1)*(n+1))/6 - b ;
    long long apb = asmbs/amb ;
    long long AA = (apb + amb)/2 ;
    long long BB = (apb - amb)/2 ;
    vector<int> res = {(int)AA , (int)BB} ;
    if(flag && ) swap(res[0] , res[1]) ;
    return res ;
}
