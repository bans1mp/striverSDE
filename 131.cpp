class Solution {
public:
    vector<vector<string>> res ;

    bool isPali(string &s){
        string k = s ;
        reverse(k.begin() , k.end()) ;
        return s == k ;
    }

    void solve(string &s , int idx , vector<string> &curr){
        if(idx == s.length()){
            res.push_back(curr) ;
            return ;
        }
        for(int i = idx ; i < s.length() ; i++){
            string sub = s.substr(idx , i-idx+1 );
            if(isPali(sub)){
                curr.push_back(sub) ;
                solve(s,i+1,curr) ;
                curr.pop_back() ;
            }
        }
        return ;
    }

    vector<vector<string>> partition(string s) {
        res.clear() ;
        vector<string> curr ;
        solve(s , 0 , curr) ;
        return res ;
    }
};
