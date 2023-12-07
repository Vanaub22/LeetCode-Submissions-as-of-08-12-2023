// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits

class Solution {
public:
    static bool comp(int a, int b){
        if(oneBitCount(a)==oneBitCount(b)) return a<b;
        else return oneBitCount(a)<oneBitCount(b);
    }
    static int oneBitCount(int num){
        int count=1;
        while(num>1){
            if(num%2==1) count++;
            num/=2;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};