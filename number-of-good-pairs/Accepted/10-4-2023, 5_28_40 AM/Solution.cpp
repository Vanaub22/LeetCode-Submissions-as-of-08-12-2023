// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good_pairs=0;
        unordered_map<int,int> umap;
        for(int i:nums)
        umap[i]++;
        unordered_map<int,int>::iterator it=umap.begin();
        while(it!=umap.end()){
            if(it->second>1)
            good_pairs+=(((it->second)*(it->second-1))/2);
            it++;
        }
        return(good_pairs);
    }
};