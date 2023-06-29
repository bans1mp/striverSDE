class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums ;
        vector<int> res ;
        int fact = 1 ;
        for(int i = 1 ; i < n ; i++){
            fact = fact*i ;
            nums.push_back(i) ;
        }
        nums.push_back(n) ;
        k-- ;
        string ans = "" ;
        while(true){
            int idx = k/fact ;
            res.push_back(nums[idx]) ;
            nums.erase(nums.begin() + idx) ;
            if(nums.size() == 0) break ;
            k = k%fact ;
            fact = fact/nums.size();
            
            
        }
        
        for(auto x : res){
            ans = ans + to_string(x) ;
        }
        return ans ;

    }
};
