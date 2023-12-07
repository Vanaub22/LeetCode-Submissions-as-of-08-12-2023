// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>> groups;
        map<int,vector<int>> grouped_indices;
        for(int i=0;i<n;i++)
        grouped_indices[groupSizes[i]].push_back(i);
        for(auto it:grouped_indices){
            int i=0;
            vector<int> group;
            for(;i<it.second.size();i++){
                group.push_back(it.second[i]);
                if(group.size()==it.first){
                    groups.push_back(group);
                    group.clear();
                }
            }
        }
        return(groups);
    }
};