// https://leetcode.com/problems/largest-number

class Solution {
public:
    static bool solve(int a,int b){
        string x=to_string(a),y=to_string(b);
        if(x.length()==y.length())
        return(a>=b);
        int i=0;
        while(i<x.length() && i<y.length()){
            if(x[i]<y[i])
            return(false);
            i++;
        }
        int k=0;
        while(i<x.length()){
            if(x[i]<y[k])
            return(false);
            i++;
            k++;
        }
        return(true);
    }
    string largestNumber(vector<int>& nums) {
        string largest="";
        sort(nums.begin(),nums.end(),solve);
        for(int i:nums)
        largest+=to_string(i);
        return(largest);
    }
};