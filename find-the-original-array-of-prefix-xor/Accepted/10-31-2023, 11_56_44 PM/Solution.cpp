// https://leetcode.com/problems/find-the-original-array-of-prefix-xor

class Solution {
public:
    // If x ^ a = b => x ^ a ^ a = b ^ a => x ^ 0 = b ^ a => x = a ^ b
    // It is given that pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i]
    // This implies, pref[i] ^ a[i+1] = pref[i+1] => a[i+1] = pref[i] ^ pref[i+1]
    // Therfore, a[i] = pref[i-1] ^ pref[i] for i >= 1 & a[0] = pref[0]
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int> arr(n,pref[0]);
        for(int i=1;i<n;i++) arr[i]=pref[i-1]^pref[i];
        return arr;
    }
};