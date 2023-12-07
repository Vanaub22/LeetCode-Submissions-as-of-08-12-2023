// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent

class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        String result1="",result2="";
        for(String word:word1) result1+=word;
        for(String word:word2) result2+=word;
        return result1.equals(result2);
    }
}