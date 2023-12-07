// https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters

class Solution {
public:
    char generateRandom(char a, char b){
        char generated_char='a';
        while(generated_char==a ||generated_char==b)
        generated_char=(char)(rand()%26);
        return(generated_char);        
    }
    string modifyString(string s) {
        if(s.length()==1){
            if(s[0]=='?')
            s[0]='a';
            return(s);
        }
        int n=s.length();
        if(s[0]=='?')
        s[0]=generateRandom('z',s[1]);
        if(s[n-1]=='?')
        s[n-1]=generateRandom(s[n-2],'z');
        for(int i=1;i<n-1;i++)
        if(s[i]=='?')
        s[i]=generateRandom(s[i-1],s[i+1]);
        return(s);
    }
};