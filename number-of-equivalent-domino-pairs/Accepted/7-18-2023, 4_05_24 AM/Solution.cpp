// https://leetcode.com/problems/number-of-equivalent-domino-pairs

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int eqPairs=0;
        map<pair<int,int>,int> dominoFreq;
        for(vector<int> domino:dominoes){
            if(domino[0]>domino[1]) swap(domino[0],domino[1]);
            dominoFreq[pair<int,int>{domino[0],domino[1]}]++;
        }
        for(auto it:dominoFreq) eqPairs+=it.second*(it.second-1)/2;
        return eqPairs;
    }
};