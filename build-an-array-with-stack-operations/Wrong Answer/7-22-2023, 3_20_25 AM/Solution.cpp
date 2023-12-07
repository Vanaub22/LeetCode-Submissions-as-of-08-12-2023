// https://leetcode.com/problems/build-an-array-with-stack-operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        int L=target.size();
        for(int i=0;i<target[L-1];i++) ops.push_back("Push");
        for(int i=0;i<L;i++) if(target[i]!=i+1) ops.insert(ops.begin()+i+1,"Pop");
        return(ops);
    }
};