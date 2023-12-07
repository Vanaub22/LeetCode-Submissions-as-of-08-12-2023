// https://leetcode.com/problems/separate-the-digits-in-an-array

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        string num;
        for(int i:nums){
            num=to_string(i);
            for(int j=0;j<num.size();j++)
            res.push_back((int)(num[j]-'0'));
        }
        return(res);
    }
};