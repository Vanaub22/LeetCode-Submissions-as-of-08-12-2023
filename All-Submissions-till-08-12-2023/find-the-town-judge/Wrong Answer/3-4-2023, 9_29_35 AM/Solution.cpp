// https://leetcode.com/problems/find-the-town-judge

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> trust_won,trusting;
        set<int> people;
        for(auto it:trust){
            trusting[it[0]]++;
            trust_won[it[1]]++;
            people.insert(it[0]);
            people.insert(it[1]);
        } 
        for(auto it:trust_won)
        if(it.second==people.size()-1 && trusting[it.first]==0)
        return(it.first);
        return(-1);

    }
};