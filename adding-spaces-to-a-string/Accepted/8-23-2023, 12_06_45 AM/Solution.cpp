// https://leetcode.com/problems/adding-spaces-to-a-string

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int start=0;
        string res="";
        for(int space_loc:spaces){
            res+=s.substr(start,space_loc-start)+" ";
            start=space_loc;
        }
        res+=s.substr(start);
        return res;
    }
};