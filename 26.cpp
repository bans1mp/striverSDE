class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1 , j = 1 ;
        int k = 1 ;
        while(j <nums.size()){
            if(nums[j] == nums[j-1]){
                j++ ;
            }
            else{
                k++ ;
                nums[i] = nums[j] ;
                i++ ;
                j++ ;
            }
        }
        return k ;
        
    }
};
