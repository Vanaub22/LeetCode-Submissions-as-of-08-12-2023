// https://leetcode.com/problems/check-if-the-sentence-is-pangram

class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> letters;
        for(char c:sentence)
        letters.insert(c);
        return(letters.size()==26);
    }
};