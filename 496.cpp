class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nge ;
        stack<int> st ;
        for(auto x : nums2){
            if(st.empty()) st.push(x) ;
            else{
                while(!st.empty() && st.top() < x){
                    int k = st.top() ;
                    nge[k] = x ;
                    st.pop() ;
                }
                st.push(x) ;
            }
        }
        vector<int> res ;
        for(auto x : nums1){
            if(nge.find(x) == nge.end()) res.push_back(-1) ;
            else res.push_back(nge[x]) ;
        }
        return res ;
    }
};
