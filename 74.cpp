class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() ;
        int n = matrix[0].size() ;
        int l = 0 , h = m*n-1  ;
        while(l <= h){
            int mid = l + (h-l)/2 ;
            int r = mid/n ;
            int c = mid%n ;
            int num = matrix[r][c] ;
            if(num > target) h = mid-1 ;
            else if(num == target) return true ;
            else l = mid+1 ;

        }
        return false ;
    }
};
