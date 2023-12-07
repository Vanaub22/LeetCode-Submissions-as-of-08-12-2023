// https://leetcode.com/problems/largest-number

class Solution {
public:
    static bool solve(int a,int b){
        string x=to_string(a),y=to_string(b);
        if(x.length()==y.length())
        return(a>=b);
        return(stoi(to_string(x[0])+to_string(x[x.length()-1]))>=stoi(to_string(y[0])+to_string(y[y.length()-1])));
    }
    string largestNumber(vector<int>& nums) {
        string largest="";
        sort(nums.begin(),nums.end(),solve);
        for(int i:nums)
        largest+=to_string(i);
        return(largest);
    }
};