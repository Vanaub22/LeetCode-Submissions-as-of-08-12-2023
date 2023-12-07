// https://leetcode.com/problems/find-the-winner-of-an-array-game

class Solution {
public:
    void round(vector<int>& arr, int n){
        int temp=arr[0]>arr[1]?arr[1]:arr[0],start=temp==arr[0]?0:1;
        for(int i=start;i<n-1;i++)
        arr[i]=arr[i+1];
        arr[n-1]=temp;
    }
    int getWinner(vector<int>& arr, int k) {
        if(k>arr.size())
        return(*max_element(arr.begin(),arr.end()));
        int winner=0,consecutive_wins=0,n=arr.size();
        while(true){
            round(arr,n);
            if(winner==arr[0])
            consecutive_wins++;
            else
            consecutive_wins=1;
            winner=arr[0];
            if(consecutive_wins==k)
            break;
        }
        return(winner);
    }
};