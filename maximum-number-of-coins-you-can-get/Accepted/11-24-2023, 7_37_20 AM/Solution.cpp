// https://leetcode.com/problems/maximum-number-of-coins-you-can-get

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // I will be picking the 2nd greatest pile in each set of 3 piles
        // Greedy Approach is required => Sorting the pile sizes
        sort(piles.begin(),piles.end());
        int myCoins=0,n=piles.size()/3;
        // 0 to (n - 1) set is rejected because all the lowest piles will go to Bob
        // The largest pile will always go to Alice
        // From n to (3n - 1) we will proceed alternately to maximize our pile sizes
        for(int i=n;i<3*n;i+=2) myCoins+=piles[i];
        return myCoins;  
    }
};