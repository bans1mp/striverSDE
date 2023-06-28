class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end()) ;
        vector<vector<int>> res ;
        set<vector<int>> s ;
        int n = nums.size() ;
        for(int i = 0 ; i < n-2 ; i++){
            for(int j = i+1 ; j < n-1 ; j++){
                int a = j+1 ;
                int b = n-1 ;
                while(a < b){
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[a] + (long long)nums[b] ;
                    if(sum == (long long)target){
                        vector<int> newAns = {nums[i],nums[j],nums[a],nums[b]} ;
                        sort(newAns.begin() , newAns.end()) ;
                        s.insert(newAns) ;
                        a++ ;
                        b-- ;
                    }
                    else if(sum < target){
                        a++ ;
                    }
                    else b--;
                }
                
            }
            
        }
        for(auto x : s) res.push_back(x) ;
            return res ;
    }
};
