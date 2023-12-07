// https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value

class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> umap;
        for(char i:num)
        umap[(int)(i-'0')]++;
        for(int i=0;i<num.size();i++)
        if(umap[i]!=(int)(num[i]-'0'))
        return(false);
        return(true);
    }
};