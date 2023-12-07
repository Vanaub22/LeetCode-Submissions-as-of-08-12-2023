// https://leetcode.com/problems/count-items-matching-a-rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int match=0,index;
        if(ruleKey=="type")
        index=0;
        else if(ruleKey=="color")
        index=1;
        else
        index=2;
        for(int i=0;i<items.size();i++)
        if(items[i][index]==ruleValue)
        match++;
        return(match);
    }
};