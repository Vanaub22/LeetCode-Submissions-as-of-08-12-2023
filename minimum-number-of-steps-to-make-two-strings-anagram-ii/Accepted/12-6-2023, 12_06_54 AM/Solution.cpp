// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii

class Solution {
public:
    int minSteps(string a, string b) {
        int steps=0;
        unordered_map<int,int> freq;
        for(char c:a) freq[c]++;
        for(char c:b) freq[c]--;
        for(auto it:freq) steps+=abs(it.second);
        return steps;
    }
};