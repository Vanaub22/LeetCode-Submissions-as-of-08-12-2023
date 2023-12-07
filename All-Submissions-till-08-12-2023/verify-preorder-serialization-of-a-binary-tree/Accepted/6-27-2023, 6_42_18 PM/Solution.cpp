// https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree

class Solution {
public:
    bool isValidSerialization(string preorder) {
        stringstream ss(preorder);
        int nodes=1;
        string ch;
        while(getline(ss,ch,',')){
            nodes--;
            if(nodes<0)
            return(false);
            if(ch!="#")
            nodes+=2;
        }
        return(nodes==0);
    }
};