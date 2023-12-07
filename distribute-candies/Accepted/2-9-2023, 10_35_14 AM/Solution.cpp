// https://leetcode.com/problems/distribute-candies

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> umap;
        for(int i:candyType)
        umap[i]++;
        return((umap.size()<=candyType.size()/2)?(umap.size()):(candyType.size()/2));
    }
};