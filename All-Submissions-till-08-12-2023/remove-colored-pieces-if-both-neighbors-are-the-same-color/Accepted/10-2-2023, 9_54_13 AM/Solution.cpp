// https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color

class Solution {
public:
    bool winnerOfGame(string colours) {
        int a_groups=0,b_groups=0,n=colours.size();
        for(int i=1;i<n-1;i++) if(colours[i-1]==colours[i] && colours[i]==colours[i+1]) {
            if(colours[i]=='A') a_groups++;
            else b_groups++;
        }
        return a_groups>b_groups;
    }
};