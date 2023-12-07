// https://leetcode.com/problems/determine-if-two-events-have-conflict

class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
     int st1_hr,st1_min,st2_hr,st2_min,et1_hr,et1_min,et2_hr,et2_min;  
     st1_hr=stoi(event1[0].substr(0,2));
     st1_min=stoi(event1[0].substr(3,2));
     st2_hr=stoi(event2[0].substr(0,2));
     st2_min=stoi(event2[0].substr(3,2));
     et1_hr=stoi(event1[1].substr(0,2));
     et1_min=stoi(event1[1].substr(3,2));
     et2_hr=stoi(event2[1].substr(0,2));
     et2_min=stoi(event2[1].substr(3,2));
     if ((st2_hr > st1_hr && st2_hr <= et1_hr) || (st2_hr == st1_hr && (st2_min >= st1_min && (st2_hr<et1_hr || st2_min <= et1_min))))
     return(true);
     if((st2_hr<st1_hr && st2_hr<et1_hr) || (st2_hr==et1_hr && st2_min<et1_min))
     return(true);
     return(false);
    }
};