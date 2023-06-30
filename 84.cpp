//Use monotonic increasing stack
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) { 
        stack<int> st ;
        int res = 0 ;
        heights.push_back(0) ;
        int n = heights.size() ;
        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && (heights[st.top()] >= heights[i])){
                int h= heights[st.top()]; 
                st.pop() ;
                int width = st.empty() ? i : i - st.top() - 1; 
                res = max(res , h*width) ;
            }
            st.push(i) ;
        }
        return res ;
    }
};
