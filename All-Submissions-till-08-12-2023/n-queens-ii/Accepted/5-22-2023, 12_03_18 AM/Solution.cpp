// https://leetcode.com/problems/n-queens-ii

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
    void solve(int col, int &answers, vector<string>& board, int n){
        if(col==n){
            answers++;
            return;
        }
        for(int row=0;row<n;row++)
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(col+1,answers,board,n);
            board[row][col]='.';
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        int answers=0;
        solve(0,answers,board,n);
        return(answers);
    }
};