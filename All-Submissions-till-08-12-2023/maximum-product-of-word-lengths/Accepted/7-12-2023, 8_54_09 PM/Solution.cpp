// https://leetcode.com/problems/maximum-product-of-word-lengths

class Solution {
public:
    bool allCharactersCommon(bitset<26>& a,bitset<26>& b){
        for(int i=0;i<26;i++) if(a[i] && b[i]) return false;
        return true;
    }
    int maxProduct(vector<string>& words) {
        int n=words.size(),maxlen=0;
        vector<bitset<26>> characters(n);
        for(int i=0;i<n;i++){
            for(char &ch:words[i])
            characters[i][ch-'a']=1;
            for(int j=0;j<i;j++)
            if(allCharactersCommon(characters[i],characters[j])) 
            maxlen=max(maxlen,(int)words[i].length()*(int)words[j].length());
        }
        return maxlen;

    }
};