// https://leetcode.com/problems/count-sorted-vowel-strings

class Solution {
public:
    // Ways for selecting r things out of n things (with repetition) = (n+r-1)Cr
    // Here, n = 5 (No. of vowels), r = x (Length of string)
    // Expression is therfore (5+x-1)Cx = (x+4)Cx = (x+1)(x+2)(x+3)(x+4)/4!
    // Which can be written as (x+1)*(x+2)*(x+3)*(x+4)/24 
    int countVowelStrings(int x) {
        return (x+1)*(x+2)*(x+3)*(x+4)/24;
    }
};