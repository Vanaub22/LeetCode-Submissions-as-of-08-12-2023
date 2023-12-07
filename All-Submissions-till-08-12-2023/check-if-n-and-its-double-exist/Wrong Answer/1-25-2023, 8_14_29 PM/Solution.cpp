// https://leetcode.com/problems/check-if-n-and-its-double-exist

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int start,end,mid,half,n=arr.size();
        sort(arr.begin(),arr.end(),greater<int>());
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                half=arr[i]/2;
                start=i;
                end=arr.size();
                mid=start+(end-start)/2;
                while(start<=end){
                    if(arr[mid]==half)
                    return(true);
                    else if(arr[mid]<half)
                    end=mid-1;
                    else
                    start=mid+1;
                    mid=start+(end-start)/2;
                }
            }
        }
        return(false);
    }
};