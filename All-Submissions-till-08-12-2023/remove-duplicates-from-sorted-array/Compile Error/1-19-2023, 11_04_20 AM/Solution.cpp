// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.length()==0)
        return(0);
        int index=1;
        for(int i=0;i<nums.length()-1;i++)
        {
            if(nums[i]<nums[i+1])//different element
            {
                nums[index]=nums[i+1];
                index++;
            }
        }
        return(index);
    }
};