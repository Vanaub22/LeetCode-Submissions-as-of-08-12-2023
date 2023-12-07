// https://leetcode.com/problems/count-pairs-of-similar-strings

class Solution {
public:
    bool satisfy(string a,string b){
        map<char,int> mp1,mp2;
        for(char c:b)
        mp1[c]++;
        for(char c:a)
        if(mp1[c]==0)
        return(false);
        for(char c:a)
        mp2[c]++;
        for(char c:b)
        if(mp2[c]==0)
        return(false);
        return(true);
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