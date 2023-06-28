class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 , j = 0 , n =s.length() ;
        int res = 0;
        unordered_map<char,int> cnt;
        while(j < n){
            
            cnt[s[j]]++ ;
            while(cnt[s[j]] > 1){
                cnt[s[i]]-- ;
                i++ ;
            }
            res = max(res , j-i+1) ;
            j++ ;
        }
        return res ;
    }
};
