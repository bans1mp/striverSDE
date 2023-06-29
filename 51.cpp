class Solution {
public:
    bool isValid(int row , int col , int n ,  vector<string> &board){
        for(int i = 0 ; i < n ; i++){
            if(board[row][i] == 'Q') return false ;
        }
        for(int i = 0 ; i < n ; i++){
            if(board[i][col] == 'Q') return false ;
        }
        int dupr = row , dupc = col ;
        while(dupr < n && dupc < n){
            if(board[dupr][dupc] == 'Q') return false ;
            dupr++ ;
            dupc++ ;
        }
        dupr = row ;
        dupc = col ;
        while(dupr >= 0 && dupc >= 0){
            if(board[dupr][dupc] == 'Q') return false ;
            dupr-- ;
            dupc-- ;
        }
        dupr = row ;
        dupc = col ;
        while(dupr >= 0 && dupc < n){
            if(board[dupr][dupc] == 'Q') return false ;
            dupr-- ;
            dupc++ ;
        }
        dupr = row ;
        dupc = col ;
        while(dupr < n && dupc >= 0){
            if(board[dupr][dupc] == 'Q') return false ;
            dupr++ ;
            dupc-- ;
        }
        
        return true ;
    }
    
    void helper(int row  , int n  , vector<vector<string>> &res ,vector<string> &board){
        if(row == n){
            res.push_back(board) ;
            return ;
        }    
        for(int i = 0 ; i < n ; i++){
            if(isValid(row , i , n , board)){
                board[row][i] = 'Q' ;
                helper(row + 1 , n , res , board) ;
                board[row][i] = '.' ;
            }
        }
        return ;
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        string oneRow = "" ;
        int k = n ;
        while(k--) oneRow.push_back('.') ;
        vector<vector<string>> res ;
        vector<string> board( n , oneRow) ;
        helper(0 , n , res , board) ;
        return res ;
        
    }
};
