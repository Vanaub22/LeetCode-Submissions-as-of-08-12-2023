// https://leetcode.com/problems/summary-ranges

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(!nums.size())
        return{};
        vector<string> ranges;
        string range=to_string(nums[0])+"->";
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]-1){
                if(nums[i-1]!=(range[0]-'0'))
                range+=to_string(nums[i-1]);
                else
                range=range.substr(0,range.size()-2);
                ranges.push_back(range);
                range=to_string(nums[i])+"->";
            }
            else
            if(i==nums.size()-1)
            range+=to_string(nums[i]);
        }
        if(range[range.size()-1]=='>')
        range=range.substr(0,range.size()-2);
        ranges.push_back(range);
        return(ranges);
    }
};