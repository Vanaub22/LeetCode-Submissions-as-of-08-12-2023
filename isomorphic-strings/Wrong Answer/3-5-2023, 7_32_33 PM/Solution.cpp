// https://leetcode.com/problems/isomorphic-strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,int> umap;
        for(int i=0;i<s.length();i++){
            if(umap[s[i]]==0)
            umap[s[i]]=t[i];
            if(umap[s[i]]!=0 && umap[s[i]]!=t[i])
            return(false);
        }
        return(true);
    }
};