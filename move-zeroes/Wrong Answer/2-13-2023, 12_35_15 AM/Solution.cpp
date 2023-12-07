// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int nxt,pos;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==0){
            pos=i;
            nxt=i+1;
            while(nxt<nums.size())
            {
            swap(nums[nxt],nums[pos]);
            pos++;
            nxt++;
            }
        }
    } 
    }
};