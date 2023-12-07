// https://leetcode.com/problems/find-the-duplicate-number

// trying to solve using constant extra space
int findDuplicate(int* nums, int numsSize){
    int low=1,high=numsSize-1,mid=0;
    while(low<=high){
        mid=low+(high-low)/2;
        int cnt=0;
        // number of elements lesser than or equal to mid
        for(int i=0;i<numsSize;i++) if(nums[i]<=mid) cnt++;
        // technically, mid should have mid elements lesser than equal to mid
        if(cnt>mid) high=mid-1; // repeated integer is smaller than or equal to mid
        else low=mid+1; // repeated integer is greater than or equal to mid
    }
    return low;    
}