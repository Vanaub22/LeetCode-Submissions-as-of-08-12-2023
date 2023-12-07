// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
       int low=1,high=(x/2)+1,mid;
        while(low<high) {
            mid=low+(high-low)/2;
            if(mid*mid>x) high=mid-1;
            else if(mid*mid<x) low=mid;
            else break;
        }
        return mid;
    }
};