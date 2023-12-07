// https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements

class Solution {
public:
    int countElements(vector<int>& nums) {
        int lowest_count=0,highest_count=0,highest=INT_MIN,lowest=INT_MAX;
        for(int i:nums) {
            if(i>highest) {
                highest_count=0;
                highest=i;
            }
            if(i<lowest) {
                lowest_count=0;
                lowest=i;
            }
            if(i==highest) highest_count++;
            if(i==lowest) lowest_count++;
        }
        return highest==lowest?0:nums.size()-highest_count-lowest_count;
    }
};