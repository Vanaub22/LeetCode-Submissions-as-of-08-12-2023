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
        path+=(string(diff_row,'D'));
        if(tcol<j)
        path+=(string(diff_col,'L'));
        if(tcol>j)
        path+=(string(diff_col,'R'));
        // handling the wrong index
        // I am basically forcing the fn. to travel to 'u' first and then go I row down
        // this ensures that the fn. does not travel through the invalid indices of row 5
        if(target[idx]=='z'){
            path+='D';
            trow=5; 
        }
        path+='!';
        constructPath(idx+1,target,trow,tcol,path,board);
    }
    string alphabetBoardPath(string target) {
        string path="";
        unordered_map<char,pair<int,int>> board;
        board['z']={4,0}; 
        // wrong index that will be handled later (because row 5 does not fully exist)
        char c='a';
        for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        board[c++]={i,j};
        constructPath(0,target,0,0,path,board);
        return(path);
    }
};