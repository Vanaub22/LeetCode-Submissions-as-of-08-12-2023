// https://leetcode.com/problems/find-original-array-from-doubled-array

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> original;
        unordered_map<int,int> umap;
        sort(changed.begin(),changed.end());
        for(int i:changed) umap[i]++;
        for(int i:changed){
            if(umap[i]==0) continue;
            umap[i]--;
            if(umap[2*i]==0) return {};
            else{
                umap[2*i]--;
                original.push_back(i);
            }
        }
        return original;
    }
};