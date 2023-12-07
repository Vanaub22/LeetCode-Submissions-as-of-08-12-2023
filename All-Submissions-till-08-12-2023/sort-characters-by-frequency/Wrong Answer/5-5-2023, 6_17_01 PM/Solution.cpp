// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {
        map<char,int> freq;
        for(char c:s)
        freq[c]++;
        for(int i=0;i<s.length()-1;i++)
        for(int j=i+1;j<s.length();j++)
        if(freq[s[i]]<freq[s[j]])
        swap(s[i],s[j]);
        return(s);
    }
};