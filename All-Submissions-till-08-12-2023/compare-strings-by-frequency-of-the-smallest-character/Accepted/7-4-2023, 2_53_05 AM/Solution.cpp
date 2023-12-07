// https://leetcode.com/problems/compare-strings-by-frequency-of-the-smallest-character

class Solution {
public:
    int smallFreq(string num){
        int f=0;
        char lex=num[0];
        for(char c:num) if(c<lex) lex=c;
        for(char c:num) if(lex==c) f++;
        return f;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> answer,fqueries,fwords;
        for(string query:queries) fqueries.push_back(smallFreq(query));
        for(string word:words) fwords.push_back(smallFreq(word));
        for(int fquery:fqueries){ 
            int greaterWords=0;   
            for(int fword:fwords){
                if(fword>fquery)
                greaterWords++;
            }
            answer.push_back(greaterWords);
        }
        return answer;
    }
};