// https://leetcode.com/problems/rectangle-area

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area_a=abs((ax1-ax2)*(ay2-ay1)),area_b=abs((bx1-bx2)*(by2-by1)),l=min(bx2,ax2)-max(ax1,bx1),b=min(by2,ay2)-max(ay1,by1),area_overlap=l>0 && b>0?l*b:0;
        return area_a+area_b-area_overlap; 
    }
};