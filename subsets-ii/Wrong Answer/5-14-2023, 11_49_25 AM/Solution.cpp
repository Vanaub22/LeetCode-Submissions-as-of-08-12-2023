// https://leetcode.com/problems/subsets-ii

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        int n=arr.size(),powsize=pow(2,n)-1;
        set<vector<int>> powset;
        for(int i=0;i<=powsize;i++){
            vector<int> st;
            for(int j=0;j<n;j++){
                if(i&(1<<j))
                st.push_back(arr[j]);
            }
            powset.insert(st);
        }
        return(vector<vector<int>>(powset.begin(),powset.end()));
    }
};