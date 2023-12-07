// https://leetcode.com/problems/sort-integers-by-the-power-value

class Solution {
public:
    // Looking at the low constraints we can easily go for Simulation and Custom Sorting 
    int getKth(int lo, int hi, int k) {
        vector<int> range;
        for(int i=lo;i<=hi;i++) range.emplace_back(i);
        sort(range.begin(),range.end(),[&](int& a, int &b) {
            return customOrder(a,b,determinePowVal(a),determinePowVal(b));
        });
        return range[k-1]; // 1-indexed
    }
    // Custom Sorting Comparator Function
    static int customOrder(int a, int b, int pow_a, int pow_b) {
        return pow_a==pow_b?a<b:pow_a<pow_b;
    }
    // Helper function to determine Power Value iteratively
    int determinePowVal(int x) {
        int steps=0;
        while(x!=1) {
            steps++;
            x=x%2==1?3*x+1:x/2;
        }
        return steps;
    }
};