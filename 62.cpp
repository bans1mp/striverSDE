class Solution {
public:

    int dp[101][101] ;

    int solve(int i , int j , int a , int b){
        if(dp[i][j] != -1 ) return dp[i][j] ;
        if(i == a || j == b) return 1;
        return dp[i][j] = solve(i+1 , j , a , b) + solve(i , j+1 , a , b) ;
    }

    int uniquePaths(int m, int n) {
        memset(dp , -1 , sizeof(dp)); 
        return solve(0,0,m-1,n-1) ;
    }
};
