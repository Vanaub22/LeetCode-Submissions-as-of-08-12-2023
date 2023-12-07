// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
public:
    stack<int> stk;
    void push(int x) {
        if(stk.size()==0){
            stk.push(x);
            return;
        }
        stack<int> s;
        s.push(x);
        while(!stk.empty()){
            s.push(stk.top());
            stk.pop();
        }
        stk=s;
    }
    int pop() {
        int popped=stk.top();
        stk.pop();
        return(popped);
    }
    int peek() {
        return(stk.top());
    }
    bool empty() {
        return(stk.empty());
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