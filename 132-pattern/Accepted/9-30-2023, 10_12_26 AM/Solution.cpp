// https://leetcode.com/problems/132-pattern

class Solution {
public:
    // using Monotonic Stack Approach
    bool find132pattern(vector<int>& nums) {
        // will be storing the elements in decreasing order (i.e. largest element at bottom)
        // also the min. element before that point
        stack<pair<int,int>> monostk;
        int minimum=nums[0];
        for(int i:nums) {
            while(!monostk.empty() && i>=monostk.top().first) monostk.pop();
            if(!monostk.empty() && i>monostk.top().second) return true;
            monostk.push({i,minimum}); // minimum before this element
            minimum=min(minimum,i);
        }
        return false;
    }
};