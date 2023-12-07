// https://leetcode.com/problems/valid-mountain-array

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
        return(false);
        if(arr.size()==3 && arr[1]<=max(arr[0],arr[2]))
        return(false);
        int largest_index=max_element(arr.begin(),arr.end())-arr.begin();
        for(int i=0;i<largest_index-1;i++)
        if(arr[i]>=arr[i+1])
        return(false);
        for(int i=largest_index+1;i<arr.size()-1;i++)
        if(arr[i]<=arr[i+1])
        return(false);
        return(true);
    }
};