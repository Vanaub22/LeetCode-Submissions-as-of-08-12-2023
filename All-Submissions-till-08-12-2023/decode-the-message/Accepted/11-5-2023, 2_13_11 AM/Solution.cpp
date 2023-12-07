// https://leetcode.com/problems/decode-the-message

class Solution {
public:
    // Simple Application of HashMap
    string decodeMessage(string key, string message) {
        unordered_map<char,char> subs; // Substitution Table
        char x='a';
        // If character doesn't exist in the substitution table, just add it
        for(char c:key) if(c!=' ' && subs.find(c)==subs.end()) subs[c]=x++;
        string decoded="";
        // Get decoded message by substituting from table wherever possible
        for(char c:message) if(c==' ' || subs.find(c)==subs.end()) decoded+=c;
        else decoded+=subs[c];
        return decoded;
    }
};