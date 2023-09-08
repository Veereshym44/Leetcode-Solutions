class MyQueue {
public:
stack<int>s;
    MyQueue() {
        
    }
    
    void push(int x) {
        int size=s.size();
        stack<int>s1;
        while(!s.empty())
        {
            s1.push(s.top());
            s.pop();
        }
        s1.push(x);

        while(!s1.empty())
        {
            s.push(s1.top());
            s1.pop();
        }
        
    }
    
    int pop() {
        int x=s.top();
        s.pop();
        return x;
    }
    
    int peek() {
        return s.top();
        
    }
    
    bool empty() {
        return s.empty();
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