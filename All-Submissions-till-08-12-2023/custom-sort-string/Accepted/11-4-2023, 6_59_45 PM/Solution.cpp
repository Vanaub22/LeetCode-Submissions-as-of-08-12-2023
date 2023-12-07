// https://leetcode.com/problems/custom-sort-string

class Solution {
public:
    static bool custom(char& a, char& b, unordered_map<char,int>& priority) {
        return priority[a]<priority[b];
    }
    string customSortString(string order, string s) {
        unordered_map<char,int> priority;
        int n=order.length();
        for(int i=0;i<n;i++) {
            priority[order[i]]=i;
        }
        sort(s.begin(),s.end(),[&](char& a,char& b) {
            return custom(a,b,priority);
        });
        return s;
    }
};