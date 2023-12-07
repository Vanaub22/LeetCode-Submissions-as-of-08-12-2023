// https://leetcode.com/problems/spiral-matrix-ii

class Solution {
public:
    int direction(int dir,int r,int c,int r_lim_lo,int r_lim_hi,int c_lim_lo,int c_lim_hi){
        if(r==r_lim_lo && c==c_lim_lo)
        return(1);
        else if(r==r_lim_lo && c==c_lim_hi)
        return(2);
        else if(r==r_lim_hi && c==c_lim_hi)
        return(3);
        else if(r==r_lim_hi && c==c_lim_lo)
        return(4);
        else
        return(dir);
    }
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        int dir=1,row=0,col=0,r_lim_lo=0,r_lim_hi=n-1,c_lim_lo=0,c_lim_hi=n-1;
        for(int i=1;i<=n*n;i++){
            matrix[row][col]=i;
            if(dir!=direction(dir,row,col,r_lim_lo,r_lim_hi,c_lim_lo,c_lim_hi)){
                dir=direction(dir,row,col,r_lim_lo,r_lim_hi,c_lim_lo,c_lim_hi);
                if(row==r_lim_lo && col==c_lim_hi)
                ++r_lim_lo;
                else if(row==r_lim_hi && col==c_lim_hi)
                --c_lim_hi;
                else if(row==r_lim_hi && col==c_lim_lo)
                --r_lim_hi;
                else if(row==r_lim_lo && col==c_lim_lo)
                ++c_lim_lo;
            }
            if(dir==1)
            if(col!=c_lim_hi)
            ++col;
            else
            ++row;
            else if(dir==2)
            if(row!=r_lim_hi)
            ++row;
            else
            --col;
            else if(dir==3)
            if(col!=c_lim_lo)
            --col;
            else
            --row;
            else
            if(row!=r_lim_lo)
            --row;
            else
            ++col;
        }
        return(matrix);
    }
};