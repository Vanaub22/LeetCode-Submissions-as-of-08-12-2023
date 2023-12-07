// https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array

class Solution {
public:
    int closetTarget(vector<string>& words, string target, int start) {
        if(words[start]==target) return 0;
        int n=words.size(),dist=INT_MAX;
        for(int i=0;i<n;i++)
        if(words[i]==target) 
        dist=min(dist,min(forward_distance(i,start),backward_distance(i,start,n)));
        return dist==INT_MAX?-1:dist;
    }
    int forward_distance(int idx, int start) {
        return idx<=start?start-idx:idx-start;
    }
    int backward_distance(int idx, int start, int n) {
        return idx<=start?idx+n-start:start+n-idx;
    }
};