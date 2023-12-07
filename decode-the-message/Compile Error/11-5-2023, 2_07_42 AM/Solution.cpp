// https://leetcode.com/problems/decode-the-message

class Solution {
public:
    // Simple Application of HashMap
    string decodeMessage(string key, string message) {
        unordered_map<char,char> subs;
        char x='a';
        for(char c:key) {
            if(c!='' && subs.find(c)==subs.end()) {
                subs[c]=x;
                x++;
            }
        }
        string decoded="";
        for(char c:message) if(c==' ' || subs.find(c)==subs.end()) decoded+=c;
        else decoded+=subs[c];
        return decoded;
    }
};