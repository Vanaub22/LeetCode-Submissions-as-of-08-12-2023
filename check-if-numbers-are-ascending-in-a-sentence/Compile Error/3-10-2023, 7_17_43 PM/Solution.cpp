// https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence

class Solution {
public:
    bool areNumbersAscending(string s) {
        int num=INT_MIN;
        s+=' ';
        bool flag;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && s[i+1]-'0'<=9 && !flag){
                prev=s[i]+1;
                flag=true;
            }
            if(s[i]==' ' && flag){
                flag=false;
                prev=0;
                if(stoi(s.substr(prev,i-prev-1))>num)
                num=stoi(s.substr(prev,i-prev-1));
                else
                return(false);                
            }
        }
        return(true);
    }
};