// https://leetcode.com/problems/maximum-number-of-balloons

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> umap;
        int balloons=0;
        for(char c:text)   
        umap[c]++;
        while(true){
            umap['b']--;
            umap['a']--;
            umap['l']-=2;
            umap['o']-=2;
            umap['n']--;
            if(umap['b']<0||umap['a']<0||umap['l']<0||umap['o']<0||umap['n']<0)
            break;
            else
            balloons++;
        }
        return(balloons);
    }
};