// https://leetcode.com/problems/validate-ip-address

class Solution {
public:
    string validIPAddress(string queryIP) {
        for(int i=0;;i++)
        if(queryIP[i]=='.') return checkIPv4(queryIP+'.')?"IPv4":"Neither";
        else if(queryIP[i]==':') return checkIPv6(queryIP+':')?"IPv6":"Neither";
        return "Neither";
    }
    bool checkIPv4(string IP) {
        stringstream ss(IP);
        string x;
        while(getline(ss,x,'.')) {
            // cout<<"str: "<<x<<endl;
            if(x=="") return false;
            if(hasLeadingZeroesOrChars(x)) return false;
            int n=stoi(x);
            if(n<0 || n>255) return false;
        }
        return true;
    }
    bool checkIPv6(string IP) {
        stringstream ss(IP);
        string x;
        while(getline(ss,x,':')) {
            // cout<<"str: "<<x<<endl;
            if(x.length()<1 || x.length()>4) return false;
            if(notHex(x)) return false;
        }
        return true;
    }
    bool notHex(string x) {
        for(char c:x)
        if((c>='a' && c<='f') || (c>='A' && c<='F') || (c>='0' && c<='9')) continue;
        else return true;
        return false;
    }
    bool hasLeadingZeroesOrChars(string x) {
        if(x[0]=='0') return true;
        for(char c:x) if(isalpha(c)) return true;
        return false;
    }
};