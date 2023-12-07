// https://leetcode.com/problems/pass-the-pillow

class Solution {
public:
    int passThePillow(int n, int time) {
        int t=1,i=2,dir=1;
        while(t<time){
            t++;
            if(i==n)
            dir=-1;
            if(i==0)
            dir=1;
            i+=(dir);
        }
        return(i);
    }
};