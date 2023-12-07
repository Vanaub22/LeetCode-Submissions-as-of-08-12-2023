// https://leetcode.com/problems/reducing-dishes

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size(),maxLikeCoeff=0;
        sort(satisfaction.begin(),satisfaction.end());
        for(int i=0;i<n;i++){
            int likeCoeff=0;
            for(int j=i;j<n;j++) likeCoeff+=satisfaction[j]*(j-i+1);
            maxLikeCoeff=max(maxLikeCoeff,likeCoeff);
        }
        return maxLikeCoeff;
    }
};