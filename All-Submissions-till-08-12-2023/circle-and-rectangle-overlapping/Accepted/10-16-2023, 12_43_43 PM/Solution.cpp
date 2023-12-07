// https://leetcode.com/problems/circle-and-rectangle-overlapping

class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        // Finding the point on the Rectangle closest to the centre of the Circle and then checking
        int closest_x=max(x1,min(x2,xCenter)),closest_y=max(y1,min(y2,yCenter));
        return pow(closest_x-xCenter,2)+pow(closest_y-yCenter,2)<=pow(radius,2);

    }
};