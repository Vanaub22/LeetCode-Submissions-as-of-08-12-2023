// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> umap;
        for(char c:s)
        umap[c]++;
        for(char c:t){
            if(umap[c]==0)
            return(false);
            else
            umap[c]--;
        }
        return(true);   
    }
};