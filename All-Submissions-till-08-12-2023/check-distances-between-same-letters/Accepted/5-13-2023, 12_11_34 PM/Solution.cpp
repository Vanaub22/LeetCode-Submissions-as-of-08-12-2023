// https://leetcode.com/problems/check-distances-between-same-letters

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char,int> firstIndex;
        firstIndex[s[0]]=0;
        for(int i=1;i<s.length();i++){
            if(firstIndex[s[i]]==0){
                if(s[i]==s[0]){
                    if(distance[s[i]-'a']!=i-1)
                    return(false);
                }
                else
                firstIndex[s[i]]=i;
            }
            else
            if(distance[s[i]-'a']!=i-firstIndex[s[i]]-1)
            return(false);              
        }
        return(true);
    }
};