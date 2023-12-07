// https://leetcode.com/problems/arranging-coins

class Solution {
public:
    int arrangeCoins(int n) {
        int stairs=0,coin_in_row=1;
        while(n>0){
            stairs++;
            n-=coin_in_row;
            coin_in_row++;
        }
        return(stairs-1); //subtracting the last incomplete stair
    }
};