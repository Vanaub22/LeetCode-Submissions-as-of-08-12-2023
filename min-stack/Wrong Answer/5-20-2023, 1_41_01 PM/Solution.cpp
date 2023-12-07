// https://leetcode.com/problems/min-stack

class MinStack {
public:
    int curr_min=INT_MAX;
    struct val_min{
        int min,val;
    };
    stack<val_min> stk;
    void push(int val) {
        curr_min=min(curr_min,val);
        val_min entry;
        entry.min=curr_min;
        entry.val=val;
        stk.push(entry);
    }
    void pop() {
        stk.pop();
    }
    int top() {
        return(stk.top().val);
    }
    int getMin() {
        return(stk.top().min);
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