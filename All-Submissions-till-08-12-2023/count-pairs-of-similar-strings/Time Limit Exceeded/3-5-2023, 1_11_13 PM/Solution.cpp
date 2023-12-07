// https://leetcode.com/problems/count-pairs-of-similar-strings

class Solution {
public:
    bool satisfy(string a,string b){
        set<char> a_letters,b_letters;
        for(char c:a)
        a_letters.insert(c);
        for(char c:b)
        b_letters.insert(c);
        return(a_letters==b_letters);
    }
    int similarPairs(vector<string>& words) {
     int pair=0;
     for(int i=0;i<words.size()-1;i++)
     for(int j=i+1;j<words.size();j++)
     if(satisfy(words[i],words[j]))
     pair++;
     return(pair);   
    }
};