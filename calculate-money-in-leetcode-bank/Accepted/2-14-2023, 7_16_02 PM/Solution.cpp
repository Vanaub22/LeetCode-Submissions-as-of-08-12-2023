// https://leetcode.com/problems/calculate-money-in-leetcode-bank

class Solution {
public:
    int totalMoney(int n) {
        double complete_weeks=n/7,extra_days=n%7,money=0;
        money=(extra_days/2)*(2*(complete_weeks+1)+(extra_days-1))+(complete_weeks/2)*(56+((complete_weeks-1)*7));
        return((int)money);
    }
};