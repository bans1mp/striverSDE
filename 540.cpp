class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, h = nums.size() - 1 ;
        while(l <= h){
            int m = (h+l) /2 ;
            if(m == h) return nums[m] ;
            if(nums[m] != nums[m+1]){
                if((m-l+1)%2 == 0){
                    l = m+1 ;
                }
                else{
                    h = m ;
                }
            }
            else{
                if((m-l+1)%2 == 0){
                    h = m-1 ;
                }
                else{
                    l = m ;
                }
            }
        }
        return nums[h] ;
    }
};
