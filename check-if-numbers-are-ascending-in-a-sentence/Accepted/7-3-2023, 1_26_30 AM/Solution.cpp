// https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence

class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev=INT_MIN;
        stringstream ss(s);
        string token;
        while(ss>>token){
            if(!isdigit(token[0])) continue;
            int x=stoi(token);
            if(x<=prev) return false;
            else prev=x;
        }
        return true;
    }
};