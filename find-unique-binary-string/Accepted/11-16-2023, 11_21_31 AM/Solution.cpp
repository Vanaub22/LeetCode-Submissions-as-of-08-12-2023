// https://leetcode.com/problems/find-unique-binary-string

class Solution {
public:
    // Constraints are small enough for Brute Force
    string findDifferentBinaryString(vector<string>& nums) {
        set<string> binSet;
        for(string num:nums) binSet.insert(num);
        int n=nums[0].length(),maxRep=pow(2,n);
        cout<<"maxrep="<<maxRep<<endl;
        // Strings are of length n (n-bit), therefore, maximum number that can be represented is 2^n
        for(int i=0;i<=maxRep;i++) {
            string bin=i>0?createBinaryString(i):string(n,'0');
            if(bin.length()<n) bin=string(n-bin.length(),'0')+bin; // Adding leading Zeroes (To make length = n)
            if(binSet.find(bin)==binSet.end()) return bin; 
        }
        return "";
    }
    string createBinaryString(int num) {
        string bin="";
        while(num>0) {
            cout<<"num val="<<num<<endl;
            bin+=to_string(num%2);
            cout<<"bin val="<<bin<<endl;
            num/=2;
            cout<<"num val="<<num<<endl;
        }
        reverse(bin.begin(),bin.end());
        return bin;
    }
};