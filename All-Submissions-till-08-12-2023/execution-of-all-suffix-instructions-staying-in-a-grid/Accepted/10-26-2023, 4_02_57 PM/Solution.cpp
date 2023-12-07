// https://leetcode.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid

class Solution {
public:
    int simulate(int idx, string& commands, vector<int>& pos, int m, int n) {
        int executed=0,row=pos[0],col=pos[1];
        while(idx<m) {
            if(commands[idx]=='L') col--;
            else if(commands[idx]=='R') col++;
            else if(commands[idx]=='U') row--;
            else row++;
            if(row<0 || col<0 || row>n-1 || col>n-1) break;
            executed++;
            idx++;
        }
        return executed;
    }
    vector<int> executeInstructions(int n, vector<int>& init_pos, string commands) {
        int m=commands.length();
        vector<int> answer(m,0);
        for(int i=0;i<m;i++) answer[i]=simulate(i,commands,init_pos,m,n);
        return answer;
    }
};