// https://leetcode.com/problems/find-the-losers-of-the-circular-game

class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> losers;
        bool receivedBall[n+1]; // 1-indexed (Friends are numbered 1-n)
        memset(receivedBall,false,sizeof(receivedBall));
        // Simulating the Circular Game
        for(int i=1,j=1;;i=(i+j*k)%n,j++) if(receivedBall[i]) break;
        else receivedBall[i]=true;
        for(int i=1;i<=n;i++) if(!receivedBall[i]) losers.emplace_back(i);
        return losers;
    }
};