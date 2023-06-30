class MyStack {
public:
    queue<int> q1 ;
    queue<int> q2 ;
    
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty()){
            int curr = q1.front() ;
            q1.pop() ;
            q2.push(curr) ;
        }    
        q1.push(x) ;
        while(!q2.empty()){
            int curr = q2.front() ;
            q2.pop() ;
            q1.push(curr) ;
        }  
    }
    
    int pop() {
        int k = q1.front() ;
        q1.pop() ;
        return k ;
    }
    
    int top() {
        return q1.front() ;
    }
    
    bool empty() {
        if(q1.empty()) return true ;
        return false ;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
