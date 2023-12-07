// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    int findMin(vector<int>& arr) {
        int low=0,high=arr.size()-1,mid=low+(high-low)/2;
        while(low<=high){
            if(arr[low]<=arr[high])
            return(arr[low]);
            if(arr[mid]<arr[low])
            high=mid;
            if(arr[mid]>arr[high])
            low=mid+1;
            mid=low+(high-low)/2;
        }
        return(arr[low]);
    }
};