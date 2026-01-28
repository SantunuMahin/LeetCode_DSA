//link:https://leetcode.com/problems/min-stack/
//155. Min Stack
class MinStack {
public:
    stack<int> s;
    stack<int>sm;
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        if(sm.empty())sm.push(val);
        else if(sm.top() >= val){
            sm.push(val);
        }
    }
    
    void pop() {
        if(s.empty())return;
        if(s.top() == sm.top() )
            sm.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return sm.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
