class StockSpanner {
public:
    stack<pair<int,int>> st ;
    StockSpanner() {
        st.push({100001 , -1}) ;
    }

    
   
    int i = 0 ;
    int next(int price) {
        while(st.top().first <= price){
            st.pop() ;
        }
        int idx = st.top().second ;
        int res = i - idx; 
        
        st.push({price , i}) ;
        i++ ;
        return res ;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
