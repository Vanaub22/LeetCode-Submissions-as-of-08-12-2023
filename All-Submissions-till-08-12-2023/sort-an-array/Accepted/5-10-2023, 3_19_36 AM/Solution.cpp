// https://leetcode.com/problems/sort-an-array

class Solution {
public:
    void merging(vector<int>& arr,int low,int mid,int high){
        int left=low,right=mid+1;
        vector<int> temp;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right])
            temp.push_back(arr[left++]);
            else
            temp.push_back(arr[right++]);
        }
        while(left<=mid)
        temp.push_back(arr[left++]);
        while(right<=high)
        temp.push_back(arr[right++]);
        for(int i=low;i<=high;i++)
        arr[i]=temp[i-low];
    }
    void mergeSort(vector<int>& arr,int low,int high){
        if(low>=high)
        return;
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merging(arr,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return(nums);
    }
};