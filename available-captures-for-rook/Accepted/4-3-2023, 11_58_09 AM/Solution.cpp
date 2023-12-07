// https://leetcode.com/problems/available-captures-for-rook

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        pair<int,int> rook_pos;
        int available_captures=0;
        for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        if(board[i][j]=='R')
        rook_pos={i,j};
        for(int i=rook_pos.first;i>=0;--i){
            if(board[i][rook_pos.second]!='.'){
                if(board[i][rook_pos.second]=='B')
                break;
                if(board[i][rook_pos.second]=='p'){
                    available_captures++;
                    break;
                }
            }
        }
        for(int i=rook_pos.first;i<8;++i){
            if(board[i][rook_pos.second]!='.'){
                if(board[i][rook_pos.second]=='B')
                break;
                if(board[i][rook_pos.second]=='p'){
                    available_captures++;
                    break;
                }
            }
        }
        for(int j=rook_pos.first;j>=0;--j){
            if(board[rook_pos.first][j]!='.'){
                if(board[rook_pos.first][j]=='B')
                break;
                if(board[rook_pos.first][j]=='p'){
                    available_captures++;
                    break;
                }
            }
        }
        for(int j=rook_pos.first;j<8;++j){
            if(board[rook_pos.first][j]!='.'){
                if(board[rook_pos.first][j]=='B')
                break;
                if(board[rook_pos.first][j]=='p'){
                available_captures++;
                break;}
            }
        }
        return(available_captures);
    }
};