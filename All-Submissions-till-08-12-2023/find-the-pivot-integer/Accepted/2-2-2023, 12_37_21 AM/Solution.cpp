// https://leetcode.com/problems/find-the-pivot-integer

class Solution {
public:
    int pivotInteger(int n) {
        int left_sum=0,right_sum=(n*(n+1))/2;
        for(int i=1;i<=n;i++){
            left_sum+=i;
            if(left_sum==right_sum)
            return(i);
            right_sum-=i;
        }
        return(-1);
    }
};