// https://leetcode.com/problems/partition-labels

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size(),left=0,idx=0;
        vector<int> partitions;
        unordered_map<char,int> lastOccurrence;
        for(int i=0;i<n;i++) lastOccurrence[s[i]]=i;
        for(int right=0;right<n;right++){
            idx=max(idx,lastOccurrence[s[right]]);
            if(right==idx){
                partitions.push_back(right-left+1);
                left=right+1;
            }
        }
        return partitions;
    }
};