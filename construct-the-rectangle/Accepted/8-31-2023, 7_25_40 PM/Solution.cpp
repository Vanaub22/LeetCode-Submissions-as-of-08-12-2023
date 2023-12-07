// https://leetcode.com/problems/construct-the-rectangle

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int side=sqrt(area);
        while(area%side) side--;
        return {area/side,side};
    }
};