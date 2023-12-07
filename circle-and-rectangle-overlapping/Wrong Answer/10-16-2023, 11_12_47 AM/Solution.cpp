// https://leetcode.com/problems/circle-and-rectangle-overlapping

class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        // The Overlap can happen in 4 ways (Keeping the Rectangle fixed)
        // From The Top
        if(yCenter+radius>=y1 && yCenter<=y2 && xCenter>=x1 && xCenter<=x2) return true;
        // From the Left
        if(xCenter+radius>=x1 && xCenter<=x2 && yCenter>=y1 && yCenter<=y2) return true;
        // From the Bottom
        if(yCenter-radius<=y2 && yCenter>=y1 && xCenter>=x1 && xCenter<=x2) return true;
        // From the Right
        if(xCenter-radius<=x2 && xCenter>=x1 && yCenter>=y1 && yCenter<=y2) return true;
        return false;
    }
};
