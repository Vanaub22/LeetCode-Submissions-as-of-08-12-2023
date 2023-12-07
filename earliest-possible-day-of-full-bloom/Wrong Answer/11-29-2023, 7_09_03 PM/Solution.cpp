// https://leetcode.com/problems/earliest-possible-day-of-full-bloom

class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        return accumulate(plantTime.begin(),plantTime.end(),*min_element(growTime.begin(),growTime.end()));
    }
};