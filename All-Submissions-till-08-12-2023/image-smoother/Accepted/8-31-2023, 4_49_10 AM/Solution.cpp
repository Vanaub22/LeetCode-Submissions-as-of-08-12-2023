// https://leetcode.com/problems/image-smoother

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size(),n=img[0].size();
        vector<vector<int>> smoothened_img(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            int valid_cells=0,sum=0;
            for(int r=i-1;r<=i+1;r++)
            for(int c=j-1;c<=j+1;c++) if(r>=0 && r<m && c>=0 && c<n){
                sum+=img[r][c];
                valid_cells+=1;
            }
            smoothened_img[i][j]=sum/valid_cells;
        }
        return smoothened_img;
    }
};