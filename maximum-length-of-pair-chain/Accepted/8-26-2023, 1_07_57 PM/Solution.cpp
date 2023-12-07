// https://leetcode.com/problems/maximum-length-of-pair-chain

class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),comp);
        int tail=INT_MIN,chainLen=0;
        for(vector<int>& pair:pairs) if(pair[0]>tail){
            chainLen++;
            tail=pair[1];
        }
        return chainLen;
    }
};