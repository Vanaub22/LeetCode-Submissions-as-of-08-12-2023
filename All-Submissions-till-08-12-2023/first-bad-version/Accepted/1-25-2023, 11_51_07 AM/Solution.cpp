// https://leetcode.com/problems/first-bad-version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1,end=n,mid=start+(end-start)/2;
        while(start<=end){
            if(isBadVersion(mid) && !isBadVersion(mid-1))
            break;
            else if(isBadVersion(mid) && isBadVersion(mid-1))
            end=mid-1;
            else if(!isBadVersion(mid) && !isBadVersion(mid-1))
            start=mid+1;
            mid=start+(end-start)/2;
        }
        return(mid);
    }
};