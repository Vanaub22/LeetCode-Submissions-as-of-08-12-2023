// https://leetcode.com/problems/valid-palindrome-ii

class Solution {
public:
    bool restCheck(int left, int right, string& s){
        while(left<right)
        if(s[left]==s[right]){
            left++;
            right--;
        }
        else return false;
        return true;
    }
    bool validPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right)
        if(s[left]==s[right]){
            left++;
            right--;
        }
        else return restCheck(left+1,right,s) || restCheck(left,right-1,s);
        return true;
    }
};