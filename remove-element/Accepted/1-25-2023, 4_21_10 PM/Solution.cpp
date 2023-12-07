// https://leetcode.com/problems/remove-element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                s--;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return(s);
    }
};