// https://leetcode.com/problems/wiggle-sort-ii

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int> maxHeap;
        for(int i:nums) maxHeap.push(i);
        for(int i=1;i<n;i+=2){
            nums[i]=maxHeap.top();
            maxHeap.pop();
        }
        for(int i=0;i<n;i+=2){
            nums[i]=maxHeap.top();
            maxHeap.pop();
        }
    }
};