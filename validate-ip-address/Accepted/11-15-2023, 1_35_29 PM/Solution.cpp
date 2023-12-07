// https://leetcode.com/problems/validate-ip-address

class Solution {
public:
    string validIPAddress(string queryIP) {
        for(char c:queryIP)
        // Adding one extra delimiter to segregate the last token
        if(c=='.') return checkIPv4(queryIP+'.')?"IPv4":"Neither";
        else if(c==':') return checkIPv6(queryIP+':')?"IPv6":"Neither";
        return "Neither";
    }
    bool checkIPv4(string IP) {
        stringstream ss(IP);
        string x;
        int tokens=0;
        while(getline(ss,x,'.')) {
            tokens++;
            if(x=="") return false;
            if(hasLeadingZeroesOrChars(x)) return false;
            if(x.length()>3) return false; // Otherwise, stoi might go out of range
            int n=stoi(x);
            if(n<0 || n>255) return false;
        }
        return tokens==4;
    }
    bool checkIPv6(string IP) {
        stringstream ss(IP);
        string x;
        int tokens=0;
        while(getline(ss,x,':')) {
            tokens++;
            if(x.length()<1 || x.length()>4) return false;
            if(notHex(x)) return false;
        }
        return tokens==8;
    }
    // To check if the passed token is not a valid Hexadecimal String (For IPv6)
    bool notHex(string x) {
        // Leading Zeroes are permitted in IPv6 tokens
        for(char c:x)
        if((c>='a' && c<='f') || (c>='A' && c<='F') || (c>='0' && c<='9')) continue;
        else return true;
        return false;
    }
    // To check if the passed token has Leading Zeroes or Characters (For IPv4)
    bool hasLeadingZeroesOrChars(string x) {
        if(x[0]=='0' && x.length()!=1) return true; // Just 0 is a valid token 
        for(char c:x) if(isalpha(c)) return true;
        return false;
    }
};