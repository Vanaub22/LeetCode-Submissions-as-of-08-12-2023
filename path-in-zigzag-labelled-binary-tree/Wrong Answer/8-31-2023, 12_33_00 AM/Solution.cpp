// https://leetcode.com/problems/path-in-zigzag-labelled-binary-tree

class Solution {
public:
    int findComplement(int level, int label){
        int start=pow(2,level),end=pow(2,level+1)-1;
        return end-(label-start);
    }
    int findParent(int label){
        return label/2;
    }
    vector<int> pathInZigZagTree(int label) {
        vector<int> path={label};
        int level=0;
        while(pow(2,level+1)<label) level++;
        while(path.back()!=1) path.push_back(findParent(findComplement(level--,path.back())));
        reverse(path.begin(),path.end());
        return path;
    }
};