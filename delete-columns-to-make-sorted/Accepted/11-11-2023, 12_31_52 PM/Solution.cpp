// https://leetcode.com/problems/delete-columns-to-make-sorted

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m=strs.size(),n=strs[0].length(),deletions=0;
        for(int i=0;i<n;i++) {
            char threshold=strs[0][i]; // The first character of the ith column
            bool delCol=false;
            for(int j=0;j<m;j++) if(strs[j][i]>=threshold) threshold=strs[j][i];
            else {
                delCol=true;
                break;
            }
            if(delCol) deletions++;  
        }
        return deletions;
    }
};