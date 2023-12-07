// https://leetcode.com/problems/build-an-array-with-stack-operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        int L=target.size(),j=1;
        for(int i=0;i<L;i++){
            if(target[i]==j){
                ops.push_back("Push");
            }
            else{
                ops.push_back("Push");
                ops.push_back("Pop");
                j++;
            }
            j++;
        }
        if(ops[ops.size()-1]=="Pop" && target[L-1]==n) ops.push_back("Push");
        return ops;
    }
};