class Solution {
public:

    double solve(double x , long long n){
        if(n == 0) return (double)1 ;
        if(n == 1) return x ;
        double k = solve(x , n/2) ;
        if(n%2 == 0) return k*k ;
        else return k*k*x ;
    }

    double myPow(double x, int n) {
        if(x == 1) return (double)1 ;
        if(n == 0) return (double)1 ;
        if(n < 0){
            long long n2 = (long long)-1*(long long)n ;
            return ((double)1/solve(x , n2)) ;
        }
        return solve(x , n); 
    }
};
