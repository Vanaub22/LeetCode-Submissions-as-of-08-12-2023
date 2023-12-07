// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0,end=matrix.size()-1,mid_row,mid_col;
        while(start<=end){
            mid_row=start+(end-start)/2;
            if(matrix[mid_row][0]==target)
            return(true);
            if(matrix[mid_row][0]<target){
                start=mid_row+1;
                if(mid_row!=matrix.size()-1 && matrix[mid_row+1][0]>target)
                break;
                }
            else
            end=mid_row-1;
        }
        start=0,end=matrix[0].size()-1;
        while(start<=end){
            mid_col=start+(end-start)/2;
            if(matrix[mid_row][mid_col]==target)
            return(true);
            if(matrix[mid_row][mid_col]<target)
            start=mid_col+1;
            else
            end=mid_col-1;
        }
        return(false);
    }
};