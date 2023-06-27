class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1 ;
        int j = n-1 ;
        int curr = m+n-1 ;
        while(j >= 0){
            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[curr] = nums1[i] ;
                i-- ;
                curr-- ;
            }
            else{
                nums1[curr] = nums2[j] ;
                curr-- ;
                j-- ;
            }
        }
        return ;
    }
};
