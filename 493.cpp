class Solution {
public:
    int res = 0 ;

    void merge(vector<int> &nums , int i , int m , int j){
        int a = i ;
        int b = m+1 ;
        while(a <= m){
            while(b <= j && (long long)2*nums[b] < (long long)nums[a]){
                b++ ;
            }
            res += (b - (m+1)) ;
            a++ ;
        }
        a = i ;
        b = m+1 ;
        vector<int> arr ;
        while(a <= m){
            while(b <= j && nums[b] <= nums[a]){
                arr.push_back(nums[b]) ;
                b++ ;
            }
            arr.push_back(nums[a]) ;
            a++ ;
        }
        for(int k =0 ; k < arr.size() ; k++){
            nums[k+i] = arr[k] ;
        }
        return ;
    }

    void mergeSort(vector<int> &nums ,  int i , int j){
        if(i == j) return  ;
        int m = i + (j-i)/2 ;
        mergeSort(nums , i ,m) ;
        mergeSort(nums , m+1 , j) ;
        merge(nums , i , m , j) ;
        return ;
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size() ;
        mergeSort(nums , 0 , n-1) ;
        return res; 
    }
};
