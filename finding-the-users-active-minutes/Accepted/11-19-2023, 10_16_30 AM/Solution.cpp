// https://leetcode.com/problems/finding-the-users-active-minutes

class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        // Storing the unique active minutes in sets for each user
        map<int,set<int>> uam;
        for(auto log:logs) uam[log[0]].insert(log[1]);
        vector<int> answer(k,0);
        for(auto it:uam) answer[it.second.size()-1]++; // 1-indexed
        return answer;
    }
};