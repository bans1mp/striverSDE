class Solution {
public:
    string reverseWords(string s) {
        int n = s.length() ;
        int lastSpace = -1 ;
        for(int i = 0 ; i < n; i++){
            if(s[i] == ' '){
                if(i-1-lastSpace <= 0){
                    continue ;
                }
                else{
                    reverse(s.begin() + lastSpace + 1 , s.begin()+i) ;
                }
                lastSpace = i ;
                
            }
        }
        reverse(s.begin() + lastSpace + 1 , s.end()) ;
        while(s[0] == ' ') s.erase(s.begin()) ;
        reverse(s.begin() , s.end()) ;
        while(s[0] == ' ') s.erase(s.begin()) ;
        for(int i = s.length() -1 ; i >= 1 ; i--){
            if(s[i] == ' ' && s[i-1] == ' '){
                s.erase(s.begin() + i) ;
            }
        }
        
        
        return s ;
    }
};
