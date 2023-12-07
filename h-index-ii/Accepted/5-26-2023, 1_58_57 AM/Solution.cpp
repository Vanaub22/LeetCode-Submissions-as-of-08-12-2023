// https://leetcode.com/problems/h-index-ii

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size(),start=0,end=n-1,mid,hindex=0;
        if(start==end)
        return(citations[start]==0?0:1);
        while(start<=end){
            mid=start+(end-start)/2;
            if(citations[mid]<n-mid)
            start=mid+1;
            else{
                end=mid-1;
                hindex=n-mid;
            }
        }
        return(hindex);
    }
};