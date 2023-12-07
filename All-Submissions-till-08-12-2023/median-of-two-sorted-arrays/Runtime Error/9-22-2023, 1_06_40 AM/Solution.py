// https://leetcode.com/problems/median-of-two-sorted-arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        double median;
        int m=a.size(),n=b.size(),i=0,j=0,k=0;
        vector<int> merged(m+n);
        while(i<m && j<n) if(a[i]<=b[j]) merged[k++]=a[i++];
        else merged[k++]=b[j++];
        while(i<m) merged[k++]=a[i++];
        while(j<n) merged[k++]=b[j++];
        if((m+n)%2==0) return((double)(merged[((m+n)/2)-1]+merged[(m+n)/2])/2);
        return((double)merged[(m+n)/2]);
    }
};