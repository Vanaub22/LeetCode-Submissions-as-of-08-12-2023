// https://leetcode.com/problems/number-of-good-ways-to-split-a-string

class Solution {
public:
    int numSplits(string s) {
        int goodSplits=0;
        unordered_map<char,int> l_map,r_map;
        for(char c:s) r_map[c]++;
        for(char c:s){
            l_map[c]++;
            r_map[c]--;
            if(r_map[c]==0) r_map.erase(c);
            if(l_map.size()==r_map.size()) goodSplits++;
        }
        return goodSplits;
    }
};