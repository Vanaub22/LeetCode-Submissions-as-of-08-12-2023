// https://leetcode.com/problems/seat-reservation-manager

class SeatManager {
public:
    // Will be using MinHeap, implementing using Priority Queue STl
    priority_queue<int,vector<int>,greater<int>> minHeap;
    SeatManager(int n) {
        for(int i=1;i<=n;i++) minHeap.push(i);
    }
    // Will be popping out from MinHeap and returning
    int reserve() {
        int lowestAvailable=minHeap.top();
        minHeap.pop();
        return lowestAvailable;
    }
    // Will be adding seatNumber to MinHeap (ordering will be handled internally)
    void unreserve(int seatNumber) {
        minHeap.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */