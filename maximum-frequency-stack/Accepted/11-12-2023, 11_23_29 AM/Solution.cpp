// https://leetcode.com/problems/maximum-frequency-stack

class FreqStack {
public:
    unordered_map<int,int> freq;
    vector<vector<int>> entries;
    void push(int val) {
        freq[val]++;
        if(entries.size()>=freq[val]) entries[freq[val]-1].push_back(val);
        else entries.push_back({val}); // This is the highest frequency entry
    }
    
    int pop() {
        int popVal=entries.back().back();
        entries.back().pop_back(); // Removing the element with the highest frequency
        freq[popVal]--;
        if(entries.back().size()==0) entries.pop_back(); // The last entry is empty
        return popVal;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */