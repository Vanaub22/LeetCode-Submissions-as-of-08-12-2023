// https://leetcode.com/problems/long-pressed-name

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        unordered_map<char,int> nameMap,typedMap;
        for(char c:name)
        nameMap[c]++;
        for(char c:typed)
        typedMap[c]++;
        for(char c:name)
        if(nameMap[c]>typedMap[c])
        return(false);
        return(true);
    }
};