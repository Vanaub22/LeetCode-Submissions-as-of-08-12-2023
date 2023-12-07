// https://leetcode.com/problems/keyboard-row

class Solution {
public:
    bool canBeTypedInOneRow(string& word){
        if(word=="")
        return(true);
        set<char> r1({'q','w','e','r','t','y','u','i','o','p'}),r2({'a','s','d','f','g','h','j','k','l'}),r3({'z','x','c','v','b','n','m'}),row;
        if(r1.find(tolower(word[0]))!=r1.end())
        row=r1;
        else if(r2.find(tolower(word[0]))!=r2.end())
        row=r2;
        else
        row=r3;
        for(int i=1;i<word.length();i++)
        if(row.find(tolower(word[i]))==row.end())
        return(false);
        return(true);
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for(string word:words)
        if(canBeTypedInOneRow(word))
        ans.push_back(word);
        return(ans);
    }
};