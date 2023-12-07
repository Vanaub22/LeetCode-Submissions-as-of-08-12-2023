// https://leetcode.com/problems/convert-a-number-to-hexadecimal

class Solution {
public:
    string toHex(int n) {
        unordered_map<int,char> hex={{0,'0'},{1,'1'},{2,'2'},{3,'3'},{4,'4'},{5,'5'},{6,'6'},{7,'7'},{8,'8'},{9,'9'},{10,'a'},{11,'b'},{12,'c'},{13,'d'},{14,'e'},{15,'f'},};
        unsigned int num=n;
        if(num==0) return "0";
        string hexadecimal="";
        while(num>0){
            int rem=num%16;
            hexadecimal+=hex[rem];
            num/=16;
        }
        reverse(hexadecimal.begin(),hexadecimal.end());
        return hexadecimal;
    }
};