// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences

class Solution {
public:
    // Helper Function to count the number of words in each sentence
    int countWords(string& sentence) {
        // Simply count the spaces and add 1
        int count=1;
        for(char c:sentence) if(c==' ') count++;
        return count;
    }
    int mostWordsFound(vector<string>& sentences) {
        int maxWords=0;
        for(string& sentence:sentences) maxWords=max(maxWords,countWords(sentence));
        return maxWords;
    }
};