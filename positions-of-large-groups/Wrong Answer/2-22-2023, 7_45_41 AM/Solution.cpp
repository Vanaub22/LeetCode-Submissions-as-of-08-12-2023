// https://leetcode.com/problems/positions-of-large-groups

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
    vector<vector<int>> intervals;
    char begin_char=s[0],begin_index=0,group_size=1,end_index=0;
    for(int i=1;i<s.length();i++){
        if(s[i]==begin_char){
        group_size++;
        end_index=i;
        }
        else{
            if(group_size>=3)
            intervals.push_back({begin_index,end_index});
            begin_char=s[i];
            begin_index=i;
            group_size=1;
        }
    }
    if(group_size>=3)
    intervals.push_back({begin_index,end_index});
    sort(intervals.begin(),intervals.end());
    return(intervals);    
    }
};