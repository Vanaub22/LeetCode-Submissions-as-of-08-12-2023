// https://leetcode.com/problems/design-front-middle-back-queue

class FrontMiddleBackQueue {
public:
    deque<int> dq_first,dq_second;
    // For every Push and Pop Operation, I have adjusted and made the length as equal as possible for the 2 Dequeues (Maximum Permissible Size Difference = 1)
    void adjustLength() {
        if(dq_first.size()==dq_second.size() || dq_first.size()==dq_second.size()+1) return;
        if(dq_first.size()>dq_second.size()) {
            int popped=dq_first.back();
            dq_first.pop_back();
            dq_second.push_front(popped);
        }
        else {
            int popped=dq_second.front();
            dq_second.pop_front();
            dq_first.push_back(popped);
        }
    }

    void pushFront(int val) {
        dq_first.push_front(val);
        adjustLength();
    }
    
    void pushMiddle(int val) {
        if(dq_first.size()==dq_second.size()) dq_first.push_back(val);
        else {
            int popped=dq_first.back();
            dq_first.pop_back();
            dq_first.push_back(val);
            dq_second.push_front(popped);
        }
    }
    
    void pushBack(int val) {
        dq_second.push_back(val);
        adjustLength();
    }
    
    int popFront() {
        if(dq_first.empty()) return -1;
        int popped=dq_first.front();
        dq_first.pop_front();
        adjustLength();
        return popped;
    }

    int popMiddle() {
        if(dq_first.empty()) return -1;
        int popped=dq_first.back();
        dq_first.pop_back();
        adjustLength();
        return popped;
    }
    
    int popBack() {
        if(dq_second.empty()) {
            if(dq_first.empty()) return -1;
            else {
                int popped=dq_first.back();
                dq_first.pop_back();
                return popped;
            }
        }
        int popped=dq_second.back();
        dq_second.pop_back();
        adjustLength();
        return popped;
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