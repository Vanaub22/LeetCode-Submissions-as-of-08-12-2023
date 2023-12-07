// https://leetcode.com/problems/h-index-ii

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size(),start=0,end=n-1,mid;
        if(start==end)
        return(citations[start]==0?0:1);
        while(start<=end){
            mid=start+(end-start)/2;
            if(citations[mid]==n-mid)
            return(n-mid);
            else if(citations[mid]>n-mid)
            end=mid-1;
            else
            start=mid+1;
        }
        return(citations[mid]==0?0:n-mid);
    }
};