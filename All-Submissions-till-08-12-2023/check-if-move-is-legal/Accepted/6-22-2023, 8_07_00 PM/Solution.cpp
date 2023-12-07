// https://leetcode.com/problems/check-if-move-is-legal

class Solution {
public:
    bool checkMove(vector<vector<char>>& board, int r, int c, char colour) {
        board[r][c]==colour;
        int opposite=colour=='B'?'W':'B';
        if(r-1>=0 && board[r-1][c]==opposite){
            int i=r-2;
            while(i>=0){
                if(board[i][c]=='.')
                break;
                else if(board[i][c]==colour)
                return(true);
                i--;
            }
        }
        if(r+1<8 && board[r+1][c]==opposite){
            int i=r+2;
            while(i<8){
                if(board[i][c]=='.')
                break;
                else if(board[i][c]==colour)
                return(true);
                i++;
            }
        }
        if(c-1>=0 && board[r][c-1]==opposite){
            int j=c-2;
            while(j>=0){
                if(board[r][j]=='.')
                break;
                else if(board[r][j]==colour)
                return(true);
                j--;
            }
        }
        if(c+1<8 && board[r][c+1]==opposite){
            int j=c+2;
            while(j<8){
                if(board[r][j]=='.')
                break;
                else if(board[r][j]==colour)
                return(true);
                j++;
            }
        }
        if(r-1>=0 && c-1>=0 && board[r-1][c-1]==opposite){
            int i=r-2,j=c-2;
            while(i>=0 && j>=0){
                if(board[i][j]=='.')
                break;
                else if(board[i][j]==colour)
                return(true);
                i--;
                j--;
            }
        }
        if(r-1>=0 && c+1<8 && board[r-1][c+1]==opposite){
            int i=r-2,j=c+2;
            while(i>=0 && j<8){
                if(board[i][j]=='.')
                break;
                else if(board[i][j]==colour)
                return(true);
                i--;
                j++;
            }
        }
        if(r+1<8 && c-1>=0 && board[r+1][c-1]==opposite){
            int i=r+2,j=c-2;
            while(i<8 && j>=0){
                if(board[i][j]=='.')
                break;
                else if(board[i][j]==colour)
                return(true);
                i++;
                j--;
            }
        }
        if(r+1<8 && c+1<8 && board[r+1][c+1]==opposite){
            int i=r+2,j=c+2;
            while(i<8 && j<8){
                if(board[i][j]=='.')
                break;
                else if(board[i][j]==colour)
                return(true);
                i++;
                j++;
            }
        }
        return(false);
    }
};