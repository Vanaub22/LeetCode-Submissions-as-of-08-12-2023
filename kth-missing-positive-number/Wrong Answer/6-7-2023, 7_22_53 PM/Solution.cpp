// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr[0]>k)
        return(k);
        int i=0,missing=0,n=arr.size();
        for(;i<n;i++){
            missing=arr[i]-i-1;
            if(missing==k)
            return(arr[i]-1);
            if(missing>k)
            break;
        }
        return(missing<k?arr[i-1]+k-missing:arr[i-1]+missing-k+1);
    }
};