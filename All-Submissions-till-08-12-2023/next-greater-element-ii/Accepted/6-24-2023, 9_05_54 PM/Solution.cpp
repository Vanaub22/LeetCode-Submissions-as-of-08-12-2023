// https://leetcode.com/problems/next-greater-element-ii

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> nge(n,-1);
        stack<int> stk;
        for(int i=2*n-1;i>=0;i--){
            while(!stk.empty() && stk.top()<=nums[i%n])
            stk.pop();
            if(i<n)
            nge[i]=stk.empty()?-1:stk.top();
            stk.push(nums[i%n]);
        }
        return(nge);
    }
};