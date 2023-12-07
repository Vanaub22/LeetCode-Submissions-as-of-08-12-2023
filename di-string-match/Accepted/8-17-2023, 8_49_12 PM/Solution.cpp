// https://leetcode.com/problems/di-string-match

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low=0,high=s.size();
        vector<int> perm;
        for(char c:s)
        if(c=='I'){
            perm.push_back(low);
            low++;
        }
        else{
            perm.push_back(high);
            high--;
        }
        perm.push_back(high);
        return perm;
    }
};