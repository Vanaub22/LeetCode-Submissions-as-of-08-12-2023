// https://leetcode.com/problems/h-index

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int i,n=citations.size();
        for(i=0;i<n;i++)
        if(citations[i]>n-i)
        break;
        return(i==0?1:citations[i-1]);
    }
};