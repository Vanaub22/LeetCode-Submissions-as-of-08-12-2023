// https://leetcode.com/problems/build-an-array-with-stack-operations

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int j=0,L=target.size();
        vector<string> ops;
        for(int i=1;i<=n;i++){
            if(j<L){
                if(target[j]==i){
                    ops.push_back("Push");
                    j++;
                }
                else{
                    ops.push_back("Push");
                    ops.push_back("Pop");
                }
            }
            else j++;
        }
        return ops;
    }
};