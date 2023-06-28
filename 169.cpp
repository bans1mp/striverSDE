class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 1 ;
        int res = nums[0] ;
        for(int i = 1 ; i <  nums.size() ; i++){
            if(nums[i] == res) freq++ ;
            else{
                freq-- ;
                if(freq < 0){
                    res = nums[i] ;
                    freq = 1 ;
                }
            }
        }
        return res ;
    }
};
