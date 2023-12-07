// https://leetcode.com/problems/reducing-dishes

class Solution {
    public int maxSatisfaction(int[] satisfaction) {
        int n=satisfaction.length,maxLikeCoeff=0;
        Arrays.sort(satisfaction);
        if(satisfaction[n-1]<0) return 0;
        for(int i=0;i<n;i++) {
            int likeCoeff=0;
            for(int j=i;j<n;j++) likeCoeff+=satisfaction[j]*(j-i+1);
            maxLikeCoeff=Math.max(maxLikeCoeff,likeCoeff);
        }
        return maxLikeCoeff;
    }
}