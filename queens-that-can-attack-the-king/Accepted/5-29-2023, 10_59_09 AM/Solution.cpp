// https://leetcode.com/problems/queens-that-can-attack-the-king

class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<bool>> board(8,vector<bool>(8,false));
        vector<vector<int>> canAttack;
        for(auto it:queens)
        board[it[0]][it[1]]=true;
        int i=king[0],j=king[1];
        for(;i>=0;i--)
        if(board[i][j]){
            canAttack.push_back({i,j});
            break;
        }
        i=king[0];
        for(;i<8;i++)
        if(board[i][j]){
            canAttack.push_back({i,j});
            break;
        }
        i=king[0];
        for(;j>=0;j--)
        if(board[i][j]){
            canAttack.push_back({i,j});
            break;
        }
        j=king[1];
        for(;j<8;j++)
        if(board[i][j]){
            canAttack.push_back({i,j});
            break;
        }
        j=king[1];
        for(;i>=0 && j>=0;i--,j--)
        if(board[i][j]){
            canAttack.push_back({i,j});
            break;
        }
        i=king[0],j=king[1];
        for(;i>=0 && j<8;i--,j++)
        if(board[i][j]){
            canAttack.push_back({i,j});
            break;
        }
        i=king[0],j=king[1];
        for(;i<8 && j>=0;i++,j--)
        if(board[i][j]){
            canAttack.push_back({i,j});
            break;
        }
        i=king[0],j=king[1];
        for(;i<8 && j<8;i++,j++)
        if(board[i][j]){
            canAttack.push_back({i,j});
            break;
        }
        return(canAttack);
    }
};