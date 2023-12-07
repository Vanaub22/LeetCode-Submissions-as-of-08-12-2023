// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr.size()==1)
        return(k<arr[0]?k:k+1);
        int i=0,pos=0,missing=0;
        for(;i<arr.size();i++){
            int step=arr[i]-pos-1;
            pos=arr[i];
            missing+=step;
            if(k<=missing)
            break;
        }
        return(i<arr.size()?arr[i-1]+missing-k+1:arr[i-1]+k-missing);
    }
};