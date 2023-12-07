// https://leetcode.com/problems/find-the-highest-altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> heights;
        heights.push_back(0);
        for(int i=0;i<gain.size();i++)
        heights.push_back(heights[i]+gain[i]);
        return(*max_element(heights.begin(),heights.end()));
    }
};