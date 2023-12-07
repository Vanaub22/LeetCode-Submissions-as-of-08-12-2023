// https://leetcode.com/problems/relative-ranks

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int> scoreMap;
        int n=score.size();
        vector<string> ranks(n);
        for(int i=0;i<n;i++)
        scoreMap[score[i]]=i;
        int pos=n;
        for(auto it:scoreMap){
            if(pos==1)
            ranks[it.second]="Gold Medal";
            else if(pos==2)
            ranks[it.second]="Silver Medal";
            else if(pos==3)
            ranks[it.second]="Bronze Medal";
            else
            ranks[it.second]=to_string(pos);
            pos--;
        }
        return(ranks);
    }
};