// https://leetcode.com/problems/count-pairs-of-similar-strings

class Solution {
public:
    int similarPairs(vector<string> words) {
        int n=words.size(),pairs=0;
        for(int i=0;i<n;i++){
            set<char> s(words[i].begin(),words[i].end());
            words[i]=string(s.begin(),s.end());
        }
        for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        if(words[i]==words[j]) pairs++;
        return pairs;
    }
};