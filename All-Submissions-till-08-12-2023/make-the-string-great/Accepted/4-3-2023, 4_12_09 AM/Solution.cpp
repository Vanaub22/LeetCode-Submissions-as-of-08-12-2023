// https://leetcode.com/problems/make-the-string-great

class Solution {
public:
    bool sameLetterDiffCase(char a,char b){
        if(a==b)
        return(false);
        if(islower(a))
        return(a==tolower(b));
        return(a==toupper(b));
    }
    string makeGood(string s) {
        stack<char> stk;
        for(char c:s){
                if(stk.empty() || !sameLetterDiffCase(stk.top(),c))
                stk.push(c);
                else
                stk.pop();
            }
        string str="";
        while(!stk.empty()){
            str+=stk.top();
            stk.pop();
        }
        reverse(str.begin(),str.end());
        return(str);
    }
};