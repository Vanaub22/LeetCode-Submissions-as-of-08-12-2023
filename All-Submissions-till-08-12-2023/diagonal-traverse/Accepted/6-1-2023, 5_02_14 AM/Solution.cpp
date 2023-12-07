// https://leetcode.com/problems/diagonal-traverse

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> diagonals;
        int m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++){
            int row=i,col=0;
            if(row%2!=0){
                while(row>0&&col<n-1){
                    row--;
                    col++;
                }
                while(row<=i&&col>=0)
                diagonals.push_back(mat[row++][col--]);
            }
            else
            while(row>=0&&col<n)
            diagonals.push_back(mat[row--][col++]);
        }
        for(int i=1;i<n;i++){
            int col=i,row=m-1;
            if((m%2!=0 && col%2!=0) || (m%2==0 && col%2==0)){
                while(row>0&&col<n-1){
                    row--;
                    col++;
                }
                while(row<=m-1&&col>=i)
                diagonals.push_back(mat[row++][col--]);
            }
            else
            while(row>=0&&col<n)
            diagonals.push_back(mat[row--][col++]);
        }
        return(diagonals);
    }
};