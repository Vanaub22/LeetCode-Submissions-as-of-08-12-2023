// https://leetcode.com/problems/search-in-rotated-sorted-array

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0,high=arr.size()-1,mid=low+(high-low)/2;
        while(low<=high){
            if(arr[mid]==target) return(mid);
            else if(arr[low]<=arr[mid]){
                if(target>=arr[low] && target<arr[mid]) high=mid-1;
                else low=mid+1;
            }
            else{
                if(target>arr[mid] && target<=arr[high]) low=mid+1;
                else high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return -1;
    }
};