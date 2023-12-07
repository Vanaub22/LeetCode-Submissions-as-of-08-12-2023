// https://leetcode.com/problems/rotate-image

class Solution {
public: 
    //following the transpose-reflect approach
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.size()==1)
        return;
        int n=matrix.size(),temp;
        for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        swap(matrix[i][j],matrix[j][i]);
        for(int i=0;i<n;i++)
        reverse(matrix[i].begin(),matrix[i].end());  
    }
};