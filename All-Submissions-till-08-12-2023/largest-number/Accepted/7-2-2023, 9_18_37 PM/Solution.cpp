// https://leetcode.com/problems/largest-number

class Solution {
public:
    static bool comp(string& a,string& b){
        return(a+b>b+a);
    }
    string largestNumber(vector<int>& nums) {
        vector<string> str_nums;
        for(int i:nums)
        str_nums.push_back(to_string(i));
        sort(str_nums.begin(),str_nums.end(),comp);
        if(str_nums[0]=="0") return("0");
        string largest_no="";
        for(string c:str_nums)
        largest_no+=c;
        return(largest_no);
    }
};