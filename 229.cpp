class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() ;
        int num1 = -1 , c1 = 0 , num2 = -1 , c2 = 0 ;
        for(int x : nums){
            if(x==num1) c1++ ;
            else if(x==num2) c2++ ;
            else if(c1==0){
                num1 = x ;
                c1 = 1 ;
            }
            else if(c2==0){
                num2 = x ;
                c2 = 1 ;
            }
            else{
                c1-- ;
                c2-- ;
            }   
        }
        c1 = 0 ;
        c2 = 0 ;
        for(int x : nums){
            if(x==num1) c1++ ;
            else if(x==num2) c2++ ;
            else continue ;
        }
        vector<int> res ;
        if(c1>n/3) res.push_back(num1) ;
        if(c2>n/3) res.push_back(num2) ;
        return res ;
    }
};
