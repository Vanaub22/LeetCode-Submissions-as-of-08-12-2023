// https://leetcode.com/problems/bulb-switcher

class Solution {
public:
    void toggle(vector<int>& bulbs,int skip){
        int i=skip-1,n=bulbs.size();
        while(i<n){
            bulbs[i]=bulbs[i]==1?0:1;
            i+=skip;
        }
    }
    int bulbSwitch(int n) {
        if(n<=1)
        return(n);
        int on_bulbs=0;
        vector<int> bulbs(n,0);
        for(int i=1;i<=n;i++)
        toggle(bulbs,i);
        for(int bulb:bulbs)
        if(bulb==1)
        on_bulbs++;
        return(on_bulbs);
    }
};