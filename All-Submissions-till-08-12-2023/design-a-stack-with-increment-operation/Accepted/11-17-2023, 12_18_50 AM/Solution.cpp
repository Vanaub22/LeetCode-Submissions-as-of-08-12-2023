// https://leetcode.com/problems/design-a-stack-with-increment-operation

class CustomStack {
public:
    vector<int> stk;
    int capacity,top;
    CustomStack(int maxSize) {
        top=-1;
        capacity=maxSize;
        stk=vector<int>(capacity,-1);
    }
    
    void push(int x) {
        if(top==capacity-1) return;
        top++;
        stk[top]=x;
        cout<<endl;
    }
    
    int pop() {
        if(top==-1) return -1;
        int popped=stk[top];
        stk[top]=-1;
        top--;
        return popped;
    }
    
    void increment(int k, int val) {
        int idx=0;
        while(idx<=k-1 && idx<=top) {
            stk[idx]+=val;
            idx++;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */