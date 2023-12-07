// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result(arr.size());
        int max=-1;
        result[arr.size()-1]=-1;
        for(int i=arr.size()-1;i>0;i--){
            result[i-1]=(max>arr[i])?(max):(arr[i]);
            max=max>arr[i]?max:arr[i];
        }
        return(result);
    }
};