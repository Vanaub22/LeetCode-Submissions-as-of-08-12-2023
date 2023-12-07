// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(char c:s)
        arr[(int)(c-'a')]++;
        for(int i=0;i<s.length();i++)
        if(arr[(int)(s[i]-'a')]==1)
        return(i);
        return(-1);
    }
};