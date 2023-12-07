// https://leetcode.com/problems/sender-with-largest-word-count

class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int> wordsFromSender;
        int n=messages.size(),maxCount=-1;
        string maxSender="";
        for(int i=0;i<n;i++) wordsFromSender[senders[i]]+=countWords(messages[i]);
        for(auto it:wordsFromSender)
        if(it.second>maxCount){
            maxCount=it.second;
            maxSender=it.first;
        }
        else if(it.second==maxCount && it.first>maxSender) maxSender=it.first;
        return maxSender;
    }
    int countWords(string& message){
        int words=1;
        for(char c:message) if(c==' ') words++;
        return words;
    }
};