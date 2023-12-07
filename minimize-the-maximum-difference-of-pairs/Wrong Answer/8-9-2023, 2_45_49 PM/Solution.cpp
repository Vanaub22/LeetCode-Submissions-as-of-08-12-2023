// https://leetcode.com/problems/minimize-the-maximum-difference-of-pairs

class Solution {
public:
    int minimizeMax(vector<int>& arr, int pairs) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),high=arr[n-1]-arr[0],low=0,mid=low+(high-low)/2;
        while(low<high){
            if(validPairs(arr,mid,n)>=pairs) high=mid;
            else low=mid+1;
            mid=low+(high-low)/2;
        }
        return low;
    }
    int validPairs(vector<int>& arr, int lim, int n){
        int count=0;
        for(int i=0;i<n-1;i++) if(arr[i+1]-arr[i]<=lim) count++;
        return count;
    }
};