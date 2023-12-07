// https://leetcode.com/problems/letter-combinations-of-a-phone-number

class Solution {
public:
    void generateCombinations(string digits, int idx, unordered_map<char,vector<char>>& numLetters, string& combination, vector<string>& combinations){
        if(idx==digits.size()){
            combinations.push_back(combination);
            return;
        }
        for(char c:numLetters[digits[idx]]){
            combination+=c;
            generateCombinations(digits,idx+1,numLetters,combination,combinations);
            combination.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> combinations;
        if(digits=="")
        return(combinations);
        string combination="";
        unordered_map<char,vector<char>> numLetters={{'2',{'a','b','c'}},{'3',{'d','e','f'}},{'4',{'g','h','i'}},{'5',{'j','k','l'}},{'6',{'m','n','o'}},{'7',{'p','q','r','s'}},{'8',{'t','u','v'}},{'9',{'w','x','y','z'}}};
        generateCombinations(digits,0,numLetters,combination,combinations);
        return(combinations);
    }
};