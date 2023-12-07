// https://leetcode.com/problems/latest-time-by-replacing-hidden-digits

class Solution {
public:
    string maximumTime(string time) {
        for(int i=0;i<5;i++){
            if(time[i]=='?'){
                if(i==0)
                time[i]=((int)(time[1]-'0')<4)?('2'):('1');
                if(i==1)
                time[i]=(time[0]=='2')?('3'):('9');
                if(i==3)
                time[i]='5';
                if(i==4)
                time[i]='9';
            }
        }
        return(time);   
    }
};