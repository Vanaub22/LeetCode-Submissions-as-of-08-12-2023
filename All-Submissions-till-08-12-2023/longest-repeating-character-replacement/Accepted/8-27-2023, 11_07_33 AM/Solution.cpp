// https://leetcode.com/problems/longest-repeating-character-replacement

class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0,n=s.size(),maxLength=-1,maxFreq=-1;
        unordered_map<char,int> charFreq;
        for(int end=0;end<n;end++){
            charFreq[s[end]]++;
            maxFreq=max(maxFreq,charFreq[s[end]]);
            if(end-start+1-maxFreq>k) charFreq[s[start++]]--;
            maxLength=max(maxLength,end-start+1);
        }
        return maxLength;
    }
};