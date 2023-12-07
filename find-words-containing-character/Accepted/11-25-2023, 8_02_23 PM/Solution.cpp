// https://leetcode.com/problems/find-words-containing-character

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n=words.size();
        for(int i=0;i<n;i++) {
            if(words[i].find(x)==string::npos) continue;
            else ans.emplace_back(i);
        }
        return ans;
    }
};