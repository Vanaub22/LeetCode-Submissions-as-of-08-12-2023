// https://leetcode.com/problems/find-unique-binary-string

class Solution {
public:
    // Constraints are small enough for Brute Force
    string findDifferentBinaryString(vector<string>& nums) {
        set<string> binSet;
        for(string num:nums) binSet.insert(num);
        int n=nums[0].length(),maxRep=pow(2,n);
        // Strings are of length n (n-bit), therefore, maximum representable number = 2 ^ n
        for(int i=0;i<=maxRep;i++) {
            string bin=i>0?createBinaryString(i):string(n,'0');
            // Adding Leading Zeroes (To make length = n)
            if(bin.length()<n) bin=string(n-bin.length(),'0')+bin;
            if(binSet.find(bin)==binSet.end()) return bin; 
        }
        return "";
    }
    // Helper function for generating Binary Representation String
    string createBinaryString(int num) {
        string bin="";
        while(num>0) {
            bin+=to_string(num%2);
            num/=2;
        }
        reverse(bin.begin(),bin.end());
        return bin;
    }
};