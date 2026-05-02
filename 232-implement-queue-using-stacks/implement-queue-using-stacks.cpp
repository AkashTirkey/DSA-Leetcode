class MyQueue {
public:
stack<int> s1 ,s2;
    MyQueue() {}
    
    void push(int x) {
        //push elements from s1 -> s2
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        //push new element
        s1.push(x);

        //push back to s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();

            //time complexity - O(n)+O(n)+O(n).
        }
    }
    
    int pop() {
        int ele = s1.top();
        s1.pop();
        return ele; //O(1);
    }
    
    int peek() {
        return s1.top(); //O(1).
    }
    
    bool empty() {
        return s1.empty();
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