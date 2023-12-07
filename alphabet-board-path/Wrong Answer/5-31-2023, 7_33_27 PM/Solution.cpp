// https://leetcode.com/problems/alphabet-board-path

class Solution {
public:
    void constructPath(int idx,string target,int i,int j,string& path,unordered_map<char,pair<int,int>>& board){
        if(idx>target.size()-1)
        return;
        int trow=board[target[idx]].first,tcol=board[target[idx]].second,diff_row=abs(trow-i),diff_col=abs(tcol-j);
        if(trow<i)
        path+=(string(diff_row,'U'));
        if(trow>i)
        if(trow==5)
        path+=(string(4,'D'));
        else
        path+=(string(diff_row,'D'));
        if(tcol<j)
        path+=(string(diff_col,'L'));
        if(tcol>j)
        path+=(string(diff_col,'R'));
        if(trow==5 && i!=5)
        path+="D";
        path+='!';
        constructPath(idx+1,target,trow,tcol,path,board);
    }
    string alphabetBoardPath(string target) {
        string path="";
        unordered_map<char,pair<int,int>> board;
        board['z']={5,0}; 
        char c='a';
        for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        board[c++]={i,j};
        constructPath(0,target,0,0,path,board);
        return(path);
    }
};