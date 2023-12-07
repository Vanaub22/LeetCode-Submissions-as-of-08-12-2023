// https://leetcode.com/problems/ransom-note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> umap;
        for(char c:magazine)
        umap[c]++;
        for(char c:ransomNote){
            umap[c]--;
            if(umap[c]==-1)
            return(false);
        }
        return(true);
    }
};