// https://leetcode.com/problems/water-and-jug-problem

class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(targetCapacity==0)
        return(true);
        if(targetCapacity>jug1Capacity+jug2Capacity)
        return(false);
        if(targetCapacity%gcd(jug1Capacity,jug2Capacity)==0)
        return(true);
        return(false);
    }
};