#include <bits/stdc++.h> 

vector<vector<string>> res ;

void solve(string &s , int idx , unordered_set<string> &st , vector<string> &curr){
    
    if(idx == s.length()){
        res.push_back(curr) ;
        return ;
    }
    for(int i = idx ; i < s.length() ; i++){
        string k = s.substr(idx , i - idx + 1) ;
        
        if(st.find(k) != st.end()){
            curr.push_back(k) ;
            solve(s,i+1,st,curr) ;
            curr.pop_back() ;
        }
    }
    return ;
}

vector<string> wordBreak(string &s, vector<string> &d)
{
    // Write your code here
    res.clear() ;
    vector<string> ans ;
    vector<string> curr ;
    unordered_set<string> st(d.begin() , d.end()) ;
    solve(s , 0 ,  st , curr) ;
    for(auto x : res){
        string str = "" ;
        for(auto y : x){
            str += y ;
            str.push_back(' ') ;
        }
        str.pop_back() ;
        ans.push_back(str) ;
    }
    return ans ;

}
