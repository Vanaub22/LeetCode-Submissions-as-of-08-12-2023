// https://leetcode.com/problems/number-of-senior-citizens

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniors=0;
        for(string detail:details)
        if(stoi(detail.substr(11,2))>60)
        seniors++;
        return(seniors);
    }
};