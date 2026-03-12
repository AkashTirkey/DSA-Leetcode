class MinStack {
public:
        stack<int> st;
        stack<int> minSt; //tracks min at every state
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(!minSt.empty()){
        minSt.push(min(val,minSt.top()));
        }
        else{
            minSt.push(val); //first element is min by default
        }
    }
    
    void pop() {
        st.pop();
        minSt.pop(); //always pop both together
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
       return minSt.top(); //current min is always at top
    }
    //optimal approach- T.C - O(1) & S.C- O(n) we traded space for time by using extra stack to find the min.
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */