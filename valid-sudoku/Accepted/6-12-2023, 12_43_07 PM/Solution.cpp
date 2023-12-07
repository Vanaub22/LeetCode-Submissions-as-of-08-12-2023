// https://leetcode.com/problems/valid-sudoku

class Solution {
public:
    bool isValid(vector<vector<char>>& board,int row,int col,char c){
        for(int i=0;i<9;i++)
        if(board[i][col]==c || board[row][i]==c || board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
        return(false);
        return(true);
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        for(int j=0;j<9;j++){
            if(board[i][j]=='.')
            continue;
            char c=board[i][j];
            board[i][j]='.';
            if(!isValid(board,i,j,c))
            return(false);
            board[i][j]=c;
        }
        return(true);
    }
};