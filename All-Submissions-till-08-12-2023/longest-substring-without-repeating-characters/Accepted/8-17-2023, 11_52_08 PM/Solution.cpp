// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> charSet;
        int left=0,right=left,n=s.size(),maxSubLength=0;
        while(right<n)
        if(charSet.find(s[right])==charSet.end()){
            charSet.insert(s[right]);
            maxSubLength=max(maxSubLength,right-left+1);
            right++;
        }
        else{
            charSet.erase(s[left]);
            left++;
        }
        return maxSubLength;
    }
};