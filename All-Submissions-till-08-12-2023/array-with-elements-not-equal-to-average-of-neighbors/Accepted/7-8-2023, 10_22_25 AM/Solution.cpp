// https://leetcode.com/problems/array-with-elements-not-equal-to-average-of-neighbors

class Solution {
public:
    vector<int> rearrangeArray(vector<int> nums) {
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
        return nums;
    }
};