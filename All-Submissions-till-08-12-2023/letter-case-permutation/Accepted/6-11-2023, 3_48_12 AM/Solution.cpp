// https://leetcode.com/problems/letter-case-permutation

class Solution {
public:
    void findPermutations(int idx,string permutation,string& s,vector<string>& permutations){
        if(idx==s.length()){
            permutations.push_back(permutation);
            return;
        }
        char c=s[idx];
        if(isalpha(c))
        if(isupper(c))
        findPermutations(idx+1,permutation+(char)tolower(c),s,permutations);
        else
        findPermutations(idx+1,permutation+(char)toupper(c),s,permutations);            
        findPermutations(idx+1,permutation+c,s,permutations);
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> permutations;
        findPermutations(0,"",s,permutations);
        return(permutations);
    }
};