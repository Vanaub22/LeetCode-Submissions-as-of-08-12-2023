// https://leetcode.com/problems/find-k-pairs-with-smallest-sums

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>> pq;
        vector<vector<int>> kpairs;
        for(int i=0;i<nums1.size();i++)
        for(int j=0;j<nums2.size();j++)
        pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
        while(k>0 && !pq.empty()){
            kpairs.push_back(pq.top().second);
            k--;
            pq.pop();
        }
        return(kpairs);
    }
};