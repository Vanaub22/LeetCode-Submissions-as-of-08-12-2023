// https://leetcode.com/problems/maximum-ice-cream-bars

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int bars=0;
        sort(costs.begin(),costs.end());
        for(int& cost:costs)
        if(coins>=cost) {
            bars++;
            coins-=cost;
        }
        else break;
        return bars;
    }
};