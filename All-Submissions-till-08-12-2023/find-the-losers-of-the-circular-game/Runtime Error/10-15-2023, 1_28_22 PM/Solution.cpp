// https://leetcode.com/problems/find-the-losers-of-the-circular-game

class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> losers;
        bool receivedBall[n+1]; // 1-indexed (Friends are numbered 1-n)
        memset(receivedBall,false,sizeof(receivedBall));
        // Simulating the Circular Game
        // for(int i=1,j=0;;i=(i+j*k)%n,j++) if(receivedBall[i]) break;
        // else receivedBall[i]=true;
        int i=1,j=1;
        while(true) {
            if(receivedBall[i]) break;
            else receivedBall[i]=true;
            i+=j*k;
            if(i>n) i=i-n;
            j++;
        }
        for(int i=1;i<=n;i++) if(!receivedBall[i]) losers.emplace_back(i);
        return losers;
    }
};