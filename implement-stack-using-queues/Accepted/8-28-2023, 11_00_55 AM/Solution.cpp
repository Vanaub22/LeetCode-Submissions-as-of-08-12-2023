// https://leetcode.com/problems/implement-stack-using-queues

class MyStack {
public:
    queue<int> Q;
    void push(int x) {
        if(Q.size()==0){
            Q.push(x);
            return;
        }
        queue<int> q;
        q.push(x);
        while(!Q.empty()){
            q.push(Q.front());
            Q.pop();
        }
        Q=q;
    }
    int pop() {
        int popped=Q.front();
        Q.pop();
        return popped;
    }
    int top() {
        return Q.front();
    }
    bool empty() {
        return Q.empty();
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