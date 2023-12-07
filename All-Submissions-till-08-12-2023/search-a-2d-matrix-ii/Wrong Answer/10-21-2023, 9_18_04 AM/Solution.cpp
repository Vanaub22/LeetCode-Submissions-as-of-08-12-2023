// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Start searching from the Top Right and eliminate 1 row and 1 column at each iteration
        // Time Complexity: O(m+n)
        int m=matrix.size(),n=matrix[0].size(),row=0,col=n-1;
        while(row<m && col>0) {
            if(matrix[row][col]==target) return true;
            else if(target>matrix[row][col]) row++;
            else col--; 
        }
        return false;
    }
};