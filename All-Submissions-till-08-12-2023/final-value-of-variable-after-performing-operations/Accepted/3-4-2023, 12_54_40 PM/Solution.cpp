// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string operation:operations)
        if(operation=="++X" || operation=="X++")
        x+=1;
        else
        x-=1; 
        return(x);
    }
};