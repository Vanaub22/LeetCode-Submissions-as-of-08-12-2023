// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii

class Solution {
public:
    int findMin(vector<int>& arr) {
        int low=0,high=arr.size()-1,mid=low+(high-low)/2;
        while(low<high){
            if(arr[mid]<arr[high]) high=mid;
            else if(arr[mid]>=arr[high]) low=mid+1;
            else if(arr[high]==arr[high-1]) high--;
            else low++;
            mid=low+(high-low)/2;
        }
        return(arr[low]);
    }
};