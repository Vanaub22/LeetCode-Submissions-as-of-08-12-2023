// https://leetcode.com/problems/reducing-dishes

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size(),maxLikeCoeff=0;
        sort(satisfaction.begin(),satisfaction.end());
        // if last element after sorting is negative => entire array has negative elements
        if(satisfaction[n-1]<0) return 0; // therefore, no dishes are prepared
        for(int i=0;i<n;i++){
            int likeCoeff=0;
            for(int j=i;j<n;j++) likeCoeff+=satisfaction[j]*(j-i+1);
            maxLikeCoeff=max(maxLikeCoeff,likeCoeff);
        }
        return maxLikeCoeff;
    }
};