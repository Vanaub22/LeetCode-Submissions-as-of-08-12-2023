// https://leetcode.com/problems/assign-cookies

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0,content=0;
        while(i<s.size() && j<g.size()){
            if(g[j]<=s[i]){
                content++;
                j++;
            }
            i++;
        }
        return(content);
    }
};