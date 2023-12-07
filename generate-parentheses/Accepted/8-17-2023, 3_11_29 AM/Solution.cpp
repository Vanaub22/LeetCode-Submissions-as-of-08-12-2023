// https://leetcode.com/problems/generate-parentheses

class Solution {
public:
    void backtracking_generate(int opening, int closing, int idx, int n, string& combination, vector<string>& combinations){
        if(idx==n*2){
            combinations.push_back(combination);
            return;
        }
        if(opening<n && idx<n*2-1){
            combination+="(";
            backtracking_generate(opening+1,closing,idx+1,n,combination,combinations);
            combination.pop_back();
        }
        if(closing<opening && idx>0){
            combination+=")";
            backtracking_generate(opening,closing+1,idx+1,n,combination,combinations);
            combination.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> combinations;
        string combination="";
        int idx=0;
        backtracking_generate(0,0,idx,n,combination,combinations);
        return combinations;
    }
};