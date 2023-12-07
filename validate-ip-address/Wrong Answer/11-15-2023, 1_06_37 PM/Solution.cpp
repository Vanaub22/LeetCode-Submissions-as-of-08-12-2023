// https://leetcode.com/problems/validate-ip-address

class Solution {
public:
    bool checkIPv4(string IP) {
        stringstream ss(IP);
        string x;
        while(getline(ss,x,':')) {
            if(hasLeadingZeroes(x)) return false;
            try {
                int n=stoi(x);
                if(n<0 || n>255) return false;
            }
            catch(exception e) {
                return false; 
            }  
        }
        return true;
    }
    bool checkIPv6(string IP) {
        stringstream ss(IP);
        string x;
        while(getline(ss,x,':')) {
            if(x.length()<1 || x.length()>4) return false;
            if(notHex(x)) return false;
        }
        return true;
    }
    string validIPAddress(string queryIP) {
        for(int i=0;;i++)
        if(queryIP[i]=='.') return checkIPv4(queryIP)?"IPv4":"Neither";
        else if(queryIP[i]==':') return checkIPv6(queryIP)?"IPv6":"Neither";
        return "Neither";
    }
    bool notHex(string x) {
        for(char c:x)
        if((c>='a' && c<='f') || (c>='A' && c<='F') || (c>='0' && c<='9')) continue;
        else return true;
        return false;
    }
    bool hasLeadingZeroes(string x) {
        if(x.length()==1) return false; // does not have leading zeroes
        if(x[0]=='0') return true;
        return false;
    }
};