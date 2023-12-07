// https://leetcode.com/problems/largest-submatrix-with-rearrangements

class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int maxSubArea=0,m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(i==0 || matrix[i][j]==0) continue;
                else matrix[i][j]+=matrix[i-1][j]; // Consecutive Ones
            }
            // Assuming this row to be the base row for submatrix
            vector<int> baseRow=matrix[i];
            sort(baseRow.begin(),baseRow.end(),greater<int>());
            for(int j=0;j<n;j++) maxSubArea=max(maxSubArea,baseRow[j]*(j+1));
        }
        return maxSubArea;
    }
};