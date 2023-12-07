// https://leetcode.com/problems/number-of-equivalent-domino-pairs

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int eqPairs=0;
        map<pair<int,int>,int> dominoFreq;
        for(vector<int> domino:dominoes){
            if(dominoFreq[pair<int,int>{domino[0],domino[1]}]>0) eqPairs+=dominoFreq[pair<int,int>{domino[0],domino[1]}];
            if(dominoFreq[pair<int,int>{domino[1],domino[0]}]>0) eqPairs+=dominoFreq[pair<int,int>{domino[1],domino[0]}];
            dominoFreq[pair<int,int>{domino[0],domino[1]}]++;
        } 
        return eqPairs;
    }
};