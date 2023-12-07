// https://leetcode.com/problems/number-of-equivalent-domino-pairs

class Solution {
public:
    vector<int> rev_domino(vector<int> a){
        reverse(a.begin(),a.end());
        return(a);
    }
    double nC2(int n){
        return(fact(n)/(2*fact(n-2)));
    }
    double fact(int n)
    {
        if(n==0)
        return 1;
        double fact=1.0;
        for(int i=2;i<=n;i++)
        fact=fact*i;
        return(fact);
    }
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<vector<int>,int> mp;
        int eq_pairs=0;
        for(auto it:dominoes){
        if(mp[rev_domino(it)]!=0)
        mp[rev_domino(it)]++;
        else
        mp[it]++;
        }
        for(auto it:mp)
        if(it.second!=1)
        eq_pairs+=(int)nC2(it.second);
        return(eq_pairs);    
    }
};