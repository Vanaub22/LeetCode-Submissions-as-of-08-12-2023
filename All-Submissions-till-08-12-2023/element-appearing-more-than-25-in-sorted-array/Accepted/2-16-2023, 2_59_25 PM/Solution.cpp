// https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int ans;
        unordered_map<int,int> umap;
        for(int i:arr)
        umap[i]++;
        unordered_map<int,int>::iterator it=umap.begin();
        while(it!=umap.end()){
            if(it->second>(arr.size()/4)){
            ans=it->first;
            break;
            }
            it++;
        }
        return(ans);
    }
};