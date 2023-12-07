// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missing=0,idx=0,n=arr.size(),pos_no=1;
        while(missing<k && idx<n){
            if(pos_no==arr[idx]) idx++;
            else missing++;
            pos_no++;
        }
        return pos_no+k-missing-1;
    }
};