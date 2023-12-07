// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int j=0;
        for(int i=0;i<stones.size();i++)
        if(find(jewels.begin(),jewels.end(),stones[i])!=jewels.end())
        j++;
        return(j);
    }
};