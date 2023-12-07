// https://leetcode.com/problems/design-front-middle-back-queue

class FrontMiddleBackQueue {
public:
    deque<int> dq_first,dq_second;
    // For every Push Operation, I have checked and made the length as equal as possible for the 2 Dequeues (Maximum Permissible Size Difference = 1)
    void pushFront(int val) {
        dq_first.push_front(val);
        if(dq_first.size()-dq_second.size()>1) {
            int popped=dq_first.back();
            dq_first.pop_back();
            dq_second.push_front(popped);
        }
    }
    
    void pushMiddle(int val) {
        if(dq_first.size()<=dq_second.size()) dq_first.push_back(val);
        else dq_second.push_front(val);
    }
    
    void pushBack(int val) {
        dq_second.push_back(val);
        if(dq_second.size()-dq_first.size()>1) {
            int popped=dq_second.front();
            dq_second.pop_front();
            dq_first.push_back(popped);
        }
    }
    
    int popFront() {
        int popped;
        if(!dq_first.empty()) {
            popped=dq_first.front();
            dq_first.pop_front();
            return popped;
        }
        else if(!dq_second.empty()) {
            popped=dq_second.front();
            dq_second.pop_front();
            return popped;
        }
        else return -1;
    }
    
    int popMiddle() {
        int popped;
        if(!dq_first.empty()) {
            popped=dq_first.back();
            dq_first.pop_back();
            return popped;
        }
        else if(!dq_second.empty()) {
            popped=dq_second.front();
            dq_second.pop_front();
            return popped;
        }
        else return -1;
    }
    
    int popBack() {
        int popped;
        if(!dq_second.empty()) {
            popped=dq_second.back();
            dq_second.pop_back();
            return popped;
        }
        else if(!dq_first.empty()) {
            popped=dq_first.back();
            dq_first.pop_back();
            return popped;
        }
        else return -1;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */