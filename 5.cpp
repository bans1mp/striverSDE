class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length() ;
        
        string res = "" ;
        vector<vector<bool>> dp(n,vector<bool>(n,true)) ;
        for(int i = 0 ; i <n ; i++){
            dp[i][i] = true ;
            res = s.substr(i,1) ;
        }
        for(int i = n-2 ; i >=0 ; i--){
            for(int j = n-1 ; j>i ; j--){
                if(s[i] == s[j] && dp[i+1][j-1]){
                    dp[i][j] = true ;
                    if(j-i+1 > res.length()) res = s.substr(i,j-i+1) ;
                }
                else dp[i][j] = false ;
            }
        }
        return res ;
    }
};
