// https://leetcode.com/problems/largest-number

class Solution {
public:
    static bool solve(int a,int b){
        string x=to_string(a),y=to_string(b);
        return(stoi(x+y)>stoi(y+x));
    }
    string largestNumber(vector<int>& nums) {
        string largest="";
        sort(nums.begin(),nums.end(),solve);
        for(int i:nums)
        largest+=to_string(i);
        return(largest);
    }
};