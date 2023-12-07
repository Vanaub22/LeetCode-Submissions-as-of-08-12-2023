// https://leetcode.com/problems/k-items-with-the-maximum-sum

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeroes, int numNegOnes, int k) {
        if(k<=numOnes+numZeroes) return k>numOnes?numOnes:k;
        else return numOnes-(k-numZeroes-numOnes)*(-1);
    }
};