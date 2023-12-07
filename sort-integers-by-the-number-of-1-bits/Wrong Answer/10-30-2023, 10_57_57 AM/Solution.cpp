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
        return obj->countSetBits(a)<obj->countSetBits(b)?true:a>b?false:a<b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),custom);
        return arr;
    }
};