// https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position

    // There are only two cases here (can be proved):
    // 1. We move all the chips to an even position.
    // 2. We move all the chips to an odd position.
    // A single jump costs 1 while a double jump costs 2.
    // For moving to any odd position, cost from other odd positions will be 0 and that from other even positions will be 1.
    // Similarly for an even position, moving costs from other even positions will be 0 while that of odd positions will be 1.
    // The answer will simply be the minimum of the two aforementioned costs.
class Solution {
public:
    int minCostToMoveChips(vector<int>& positions) {
        int even_pos,odd_pos=even_pos=0;
        for(int& position:positions) if(position%2==0) even_pos++;
        else odd_pos++;
        return min(odd_pos,even_pos);
    }
};