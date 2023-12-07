// https://leetcode.com/problems/maximize-area-of-square-hole-in-grid

class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int removableHBarCnt=hBars.size(),removableVBarCnt=vBars.size();
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        int consecutive=1,hBarsToRemove=1,vBarsToRemove=1,side=0;
        // Finding the maximum window of consecutive removed horizontal bars
        for(int i=1;i<removableHBarCnt;i++) {
            if(hBars[i]==hBars[i-1]+1) consecutive++;
            else consecutive=1;
            hBarsToRemove=max(hBarsToRemove,consecutive);
        }
        consecutive=1;
        // Finding the maximum window of consecutive removed vertical bars
        for(int i=1;i<removableVBarCnt;i++) {
            if(vBars[i]==vBars[i-1]+1) consecutive++;
            else consecutive=1;
            vBarsToRemove=max(vBarsToRemove,consecutive);
        }
        side=min(hBarsToRemove,vBarsToRemove)+1; // Side length for square hole
        return side*side;
    }
};