// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits

class Solution {
public:
    // Helper Function to count the number of set bits
    int countSetBits(int x) {
        int setBits=0;
        while(x>0) {
            if(x&1) setBits++;
            x>>=1;
        }
        return setBits;
    }
    // Custom Sorting
    static bool custom(int a, int b) {
        Solution *obj=new Solution();
        int setBits_a=obj->countSetBits(a),setBits_b=obj->countSetBits(b);
        if(setBits_a==setBits_b) return a<b;
        else return setBits_a<setBits_b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),custom);
        return arr;
    }
};