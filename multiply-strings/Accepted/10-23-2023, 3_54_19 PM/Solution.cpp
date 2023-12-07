// https://leetcode.com/problems/multiply-strings

class Solution {
public:
    string multiply(string a, string b) {
        if(a=="0" || b=="0") return "0";
        int m=a.length(),n=b.length();
        bool leadingZeroes=true;
        vector<int> result(m+n,0);
        string ans="";
        for(int i=m-1;i>=0;i--) for(int j=n-1;j>=0;j--) {
            result[i+j+1]+=(a[i]-'0')*(b[j]-'0');
            result[i+j]+=result[i+j+1]/10;
            result[i+j+1]%=10; // Saving the Carry in the next Cell
        }
        for(int digit:result) {
            if(digit==0 && leadingZeroes) continue; // Eliminating the Leading Zeroes
            else if(digit!=0 && leadingZeroes) leadingZeroes=false;
            ans+=to_string(digit);
        }        
        return ans;
    }
};