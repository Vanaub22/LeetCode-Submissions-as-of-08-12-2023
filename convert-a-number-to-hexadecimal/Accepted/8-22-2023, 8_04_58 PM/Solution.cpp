// https://leetcode.com/problems/convert-a-number-to-hexadecimal

class Solution {
public:
    string toHex(int n) {
        char hex[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        unsigned int num=n;
        if(num==0) return "0";
        string hexadecimal="";
        while(num>0){
            hexadecimal+=hex[num%16];
            num/=16;
        }
        reverse(hexadecimal.begin(),hexadecimal.end());
        return hexadecimal;
    }
};