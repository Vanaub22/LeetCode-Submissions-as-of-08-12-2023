// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle

class Solution {
public:
    // Brute-Force Approach
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        for(auto& query:queries) {
            int x=query[0],y=query[1],radius=query[2],count=0;
            for(auto& point:points) if(pow(point[0]-x,2)+pow(point[1]-y,2)<=pow(radius,2)) count++;
            answer.push_back(count);
        }
        return answer;
    }
};