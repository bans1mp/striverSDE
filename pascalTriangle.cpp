class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res ;
        int curr = 0 ;
        for(int i = 0 ; i < numRows ; i++){
            int newSize = curr+1 ;
            vector<int> arr(newSize,0) ;
            arr[0] = 1 ;
            arr[newSize-1] = 1 ;
            for(int i = 1 ; i < newSize-1 ; i++){
                arr[i] = res.back()[i-1] + res.back()[i] ;
            }
            res.push_back(arr) ;
            curr++ ;
        }
        return res ;
    }
};
