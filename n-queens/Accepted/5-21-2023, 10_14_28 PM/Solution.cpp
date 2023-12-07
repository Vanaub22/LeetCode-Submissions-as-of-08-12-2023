// https://leetcode.com/problems/n-queens

class Solution {
public:
    bool isSafe(int r, int c, vector<string>& board, int n){
        int row=r,col=c;
        while(r>=0 && c>=0)
        if(board[r--][c--]=='Q')
        return(false);
        r=row;
        c=col;
        while(c>=0)
        if(board[r][c--]=='Q')
        return(false);
        c=col;
        while(r<n && c>=0)
        if(board[r++][c--]=='Q')
        return(false);
        return(true);
    }
    void solve(int col, vector<vector<string>>& ans, vector<string>& board, int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(col+1,ans,board,n);
            board[row][col]='.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        solve(0,ans,board,n);
        return(ans);
    }
};