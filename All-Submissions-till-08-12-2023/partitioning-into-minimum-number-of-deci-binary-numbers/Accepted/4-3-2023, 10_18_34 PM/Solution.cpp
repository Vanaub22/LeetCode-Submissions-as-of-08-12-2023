// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers

class Solution {
public:
    int minPartitions(string n) {
        int max_dig=INT_MIN;
        for(char i:n)
        max_dig=(max_dig<(int)(i-'0')?(int)(i-'0'):max_dig);
        return(max_dig);
    }
};