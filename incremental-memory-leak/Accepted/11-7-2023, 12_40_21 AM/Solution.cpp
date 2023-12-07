// https://leetcode.com/problems/incremental-memory-leak

class Solution {
public:
    vector<int> memLeak(int mem1, int mem2) {
        int t=1;
        while(true) {
            if(mem1>=mem2) {
                if(mem1-t<0) break;
                mem1-=t;
            }
            else {
                if(mem2-t<0) break;
                mem2-=t;
            }
            t++;
        }
        return {t,mem1,mem2};
    }
};