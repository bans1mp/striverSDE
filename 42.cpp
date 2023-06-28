class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size() ;
        vector<int> maxToLeft(n,0) ;
        vector<int> maxToRight(n,0) ;
        for(int i = 1 ; i < n ; i++){
            maxToLeft[i] = max(maxToLeft[i-1] , height[i-1]) ;
        }
        for(int i = n-2 ; i >= 0 ; i--){
            maxToRight[i] = max(maxToRight[i+1] , height[i+1]) ;
        }
        int res = 0 ; 
        for(int i = 1 ; i < n-1 ; i++){
            int limit = min(maxToLeft[i] , maxToRight[i]) ;
            if(limit < height[i]) continue ;
            else res += limit - height[i] ;
        }
        return res ;
    }
};
