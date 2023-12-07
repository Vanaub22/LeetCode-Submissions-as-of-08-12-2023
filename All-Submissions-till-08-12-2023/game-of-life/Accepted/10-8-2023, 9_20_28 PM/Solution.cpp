// https://leetcode.com/problems/game-of-life

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>> initial_board=board;
        for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) {
            int liveNeighbours=findLiveNeighbours(i,j,m,n,initial_board);
            if(board[i][j]==1 && (liveNeighbours<2 || liveNeighbours>3)) board[i][j]=0;
            else if(board[i][j]==0 && liveNeighbours==3) board[i][j]=1;
        }
    }
    int findLiveNeighbours(int i, int j, int m, int n, vector<vector<int>>& board) {
        int liveNeighbours=0;
        if(i-1>=0 && board[i-1][j]) liveNeighbours++;
        if(i+1<m && board[i+1][j]) liveNeighbours++;
        if(j-1>=0 && board[i][j-1]) liveNeighbours++;
        if(j+1<n && board[i][j+1]) liveNeighbours++;
        if(i-1>=0 && j-1>=0 && board[i-1][j-1]) liveNeighbours++;
        if(i-1>=0 && j+1<n && board[i-1][j+1]) liveNeighbours++;
        if(i+1<m && j-1>=0 && board[i+1][j-1]) liveNeighbours++;
        if(i+1<m && j+1<n && board[i+1][j+1]) liveNeighbours++;
        return liveNeighbours;
    }
};