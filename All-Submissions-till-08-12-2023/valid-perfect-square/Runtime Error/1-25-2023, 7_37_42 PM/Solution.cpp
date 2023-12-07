// https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
        return(true);
        int start=1,end=num/2,mid=start+(end-start)/2;
        while(start<=end){
            if(mid*mid==num)
            return(true);
            else if(mid*mid<num)
            start=mid+1;
            else
            end=mid-1;
            mid=start+(end-start)/2;
        }
        return(false);
    }
};