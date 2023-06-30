class Solution {
public:
    bool isValid(string s) {
        stack<char> st ;
        unordered_map<char,char> mp ;
        mp[')'] = '(' ;
        mp['}'] = '{' ;
        mp[']'] = '[' ;
        for(auto x : s){
            if(x == '(' || x == '{' || x== '['){
                st.push(x) ;
            }
            else{
                if(st.empty()) return false ;
                if(st.top() != mp[x]) return false ;
                st.pop() ;
            }
        }
        return st.empty() ;
    }
};
