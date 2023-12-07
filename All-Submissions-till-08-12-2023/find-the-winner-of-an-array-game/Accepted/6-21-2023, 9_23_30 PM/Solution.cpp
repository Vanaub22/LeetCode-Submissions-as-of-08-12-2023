// https://leetcode.com/problems/find-the-winner-of-an-array-game

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k>arr.size())
        return(*max_element(arr.begin(),arr.end()));
        int winner=arr[0],consecutive_wins=0,n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>winner){
                winner=arr[i];
                consecutive_wins=0;
            }
            consecutive_wins++;
            if(consecutive_wins==k)
            return(winner);
        }
        return(winner);
    }
};