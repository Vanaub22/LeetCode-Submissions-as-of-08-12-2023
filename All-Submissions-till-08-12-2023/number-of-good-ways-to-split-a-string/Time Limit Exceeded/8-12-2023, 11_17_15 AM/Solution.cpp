// https://leetcode.com/problems/number-of-good-ways-to-split-a-string

class Solution {
public:
    int equalDistinct(string a, string b){
        set<char> set_a,set_b;
        for(char c:a) set_a.insert(c);
        for(char c:b) set_b.insert(c);
        return set_a.size()==set_b.size();
    }
    int numSplits(string s) {
        int n=s.length(),good_splits=0;
        for(int i=0;i<n;i++) if(equalDistinct(s.substr(0,i),s.substr(i))) good_splits++;
        return good_splits;
    }
};