// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range

class Solution {
public:
    int countOdds(int low, int high) {
        if(high==low)return(high%2!=0);
        if(low%2==0 && high%2==0)return((high-low)/2);
        if(low%2!=0 && high%2!=0)return(((high-low)/2)+1);
        if(low%2==0)return(((high-low)/2)+1);
        else return(((high-low)/2)+1);
    }
};