// https://leetcode.com/problems/number-of-equivalent-domino-pairs

class Solution {
public:
    bool equivalent_domino(vector<int> a, vector<int> b){
        if(a==b)
        return(true);
        reverse(a.begin(),a.end());
        return(a==b);
    }
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int eq_pairs=0;
        for(int i=0;i<dominoes.size()-1;i++)
        for(int j=i+1;j<dominoes.size();j++)
        if(equivalent_domino(dominoes[i],dominoes[j]))
        eq_pairs++;
        return(eq_pairs);        
    }
};