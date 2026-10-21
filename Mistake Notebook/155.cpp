class MinStack {
    stack<long long> st;
    long long mini = INT_MAX;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty())
        {
            st.push(value);
            mini = value;
        }
        else
        {
            if(mini<value) st.push(value);
            else
            {
                st.push(2LL*value-mini);
                mini = value;
            }
        }
    }
    
    void pop() {
        long long x = st.top();
        st.pop();
        if(x<mini)
        {
            mini=2LL*mini-x;
        }
    }
    
    int top() {
        long long x=st.top();
        if(x>mini) return x;
        else
        {
            return mini;
        }
        
    }
    
    int getMin() {
        return mini;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

 /*class MinStack {
    stack<pair<int,int>> st;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty())
        {
            st.push({value,value});
        }
        else
        {
            st.push({value,min(value,st.top().second)});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
*/