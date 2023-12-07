// https://leetcode.com/problems/number-of-adjacent-elements-with-the-same-color

class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int> x(n,0),ans;
        int adj_same=0;
        for(vector<int> query:queries){
            int idx=query[0],colour=query[1];
            if(idx>0 && x[idx-1]==x[idx] && x[idx]!=0) adj_same--;
            if(idx<n-1 && x[idx+1]==x[idx] && x[idx]!=0) adj_same--;
            x[idx]=colour;
            if(idx>0 && x[idx-1]==x[idx] && x[idx]!=0) adj_same++;
            if(idx<n-1 && x[idx+1]==x[idx] && x[idx]!=0) adj_same++;
            ans.push_back(adj_same);
        }
        return ans;
    }
};