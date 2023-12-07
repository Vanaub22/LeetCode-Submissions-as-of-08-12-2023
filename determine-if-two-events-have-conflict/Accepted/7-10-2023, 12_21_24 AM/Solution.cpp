// https://leetcode.com/problems/determine-if-two-events-have-conflict

class Solution {
public:
    int minutesAggregate(string time){
        return stoi(time.substr(0,2))*60+stoi(time.substr(3,2));
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int st1=minutesAggregate(event1[0]),st2=minutesAggregate(event2[0]),et1=minutesAggregate(event1[1]),et2=minutesAggregate(event2[1]);
        return (st1<=st2 && st2<=et1) || (st2<=st1 && st1<=et2);
    }
};