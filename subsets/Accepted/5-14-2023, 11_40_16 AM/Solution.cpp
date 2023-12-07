// https://leetcode.com/problems/subsets

class Solution {
public:
    //using bit manipulation
    vector<vector<int>> subsets(vector<int>& arr) {
        int n=arr.size(),powsize=pow(2,n)-1;
        vector<vector<int>> subsets;
        for(int i=0;i<=powsize;i++){
            vector<int> st;
            for(int j=0;j<n;j++){
                if(i&(1<<j))
                st.push_back(arr[j]);
            }
            subsets.push_back(st);
        }
        return(subsets);
    }
};