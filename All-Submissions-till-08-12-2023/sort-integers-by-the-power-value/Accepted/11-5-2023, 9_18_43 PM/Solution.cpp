// https://leetcode.com/problems/sort-integers-by-the-power-value

class Solution {
public:
    // Seeing the low constraints, we can easily go for Simulation and Custom Sorting 
    int getKth(int lo, int hi, int k) {
        vector<int> range;
        unordered_map<int,int> powVal; // For O(1) Access to Power Values
        for(int i=lo;i<=hi;i++) {
            range.emplace_back(i);
            powVal[i]=determinePowVal(i);
        }
        sort(range.begin(),range.end(),[&](int& a, int &b) {
            return customOrder(a,b,powVal);
        });
        return range[k-1]; // k is 1-indexed
    }
    // Custom Sorting Comparator Function
    static int customOrder(int a, int b, unordered_map<int,int>& powVal) {
        return powVal[a]==powVal[b]?a<b:powVal[a]<powVal[b];
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