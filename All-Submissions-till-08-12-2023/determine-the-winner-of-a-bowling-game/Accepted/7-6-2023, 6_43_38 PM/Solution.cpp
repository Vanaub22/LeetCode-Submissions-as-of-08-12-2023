// https://leetcode.com/problems/determine-the-winner-of-a-bowling-game

class Solution {
public:
    int calcScore(vector<int>& player, int n){
        int score=0;
        for(int i=0;i<n;i++)
        if((i-2>=0 && player[i-2]==10) || (i-1>=0 && player[i-1]==10)) score+=2*player[i];
        else score+=player[i];
        return score;
    }
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int n=player1.size(),score1=calcScore(player1,n),score2=calcScore(player2,n);
        if(score1==score2) return 0;
        return score1>score2?1:2;
    }
};