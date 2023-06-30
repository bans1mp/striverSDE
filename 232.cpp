class MyQueue {
public:
    stack<int> st ;
    stack<int> s ;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st.empty()){
            s.push(st.top()) ;
            st.pop() ;
        }
        st.push(x) ;
        while(!s.empty()){
            st.push(s.top()) ;
            s.pop() ;
        }
    }
    
    int pop() {
        int x = st.top() ;
        st.pop() ;
        return x ;
    }
    
    int peek() {
        return st.top() ;
    }
    
    bool empty() {
        return st.empty() ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
