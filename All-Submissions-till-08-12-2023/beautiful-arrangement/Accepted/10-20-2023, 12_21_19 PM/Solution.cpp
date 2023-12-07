// https://leetcode.com/problems/beautiful-arrangement

class Solution {
public:
    // All the solutions need to be discovered, therefore, Backtracking would be preferred
    void permuteBacktrack(int pos, bool considered[], int& solutions, int n) {
        if(pos>n) {
            solutions++; // Another solution has been obtained
            return;
        }
        for(int i=1;i<=n;i++) {
            if(!considered[i] && (pos%i==0 || i%pos==0)) {
                considered[i]=true;
                permuteBacktrack(pos+1,considered,solutions,n);
                considered[i]=false; // Backtracking
            }
        }
    }
    int countArrangement(int n) {
        int solutions=0;
        bool considered[n+1]; // 1-indexed, to keep a track of integers that have been considered
        memset(considered,false,sizeof(considered)); // setting false to positions
        permuteBacktrack(1,considered,solutions,n);
        return solutions;
    }
};