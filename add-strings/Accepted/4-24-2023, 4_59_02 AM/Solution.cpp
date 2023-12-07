// https://leetcode.com/problems/add-strings

class Solution {
public:
    char Sum(char a, char b, char c){
        int sum=a+b+c-(3*'0');
        return(sum>9?sum%10+'0':sum+'0');
    }
    char Carry(char a, char b, char c){
        int sum=a+b+c-(3*'0');
        return(sum>9?'1':'0');
    }
    string addStrings(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string result="";
        int i=0;
        char c='0';
        while(i<a.length()&&i<b.length()){
            result+=Sum(a[i],b[i],c);
            c=Carry(a[i],b[i],c);
            i++;
        }
        while(i<a.length()){
            result+=Sum(a[i],'0',c);
            c=Carry(a[i],'0',c);
            i++;
        }
        while(i<b.length()){
            result+=Sum(b[i],'0',c);
            c=Carry(b[i],'0',c);
            i++;
        }
        if(c!='0')
        result+=c;
        reverse(result.begin(),result.end());
        return(result);
    }
};