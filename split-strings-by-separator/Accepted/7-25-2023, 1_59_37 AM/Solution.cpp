// https://leetcode.com/problems/split-strings-by-separator

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& extracts, char separator) {
        vector<string> words;
        for(string& extract:extracts){
            string word="";
            for(char& c:extract)
            if(c==separator && word!=""){
                words.push_back(word);
                word="";
            }
            else if(c!=separator) word+=c;
            if(word!="") words.push_back(word);
        }
        return words;
    }
};