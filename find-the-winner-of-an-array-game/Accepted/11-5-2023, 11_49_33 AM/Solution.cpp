// https://leetcode.com/problems/find-the-winner-of-an-array-game

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int winner=arr[0],consecutive_wins=0,n=arr.size();
        if(k>=n) return *max_element(arr.begin(),arr.end());
        for(int i=1;i<n;i++) {
            if(arr[i]>winner) {
                winner=arr[i];
                consecutive_wins=0;
            }
            consecutive_wins++;
            if(consecutive_wins==k) break;
        }
        return winner;
    }
};