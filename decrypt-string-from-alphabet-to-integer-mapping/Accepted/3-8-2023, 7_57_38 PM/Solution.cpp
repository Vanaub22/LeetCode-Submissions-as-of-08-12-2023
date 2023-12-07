// https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping

class Solution {
public:
    string freqAlphabets(string s) {
        string result="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='#'){
                result=(char)((s[i-2]-'0')*10+(s[i-1]-'0')+96)+result;
                i-=2;
            }
            else
            result=(char)((s[i]-'0')+96)+result;
        }
        return(result);
    }
};