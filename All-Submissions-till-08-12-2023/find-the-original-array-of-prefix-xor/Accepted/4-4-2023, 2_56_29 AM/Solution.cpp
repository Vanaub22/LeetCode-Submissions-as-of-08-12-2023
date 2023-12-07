// https://leetcode.com/problems/find-the-original-array-of-prefix-xor

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> arr;
        arr.push_back(pref[0]);
        if(pref.size()!=1){
            for(int i=1;i<pref.size();i++)
            arr.push_back(pref[i]^pref[i-1]);
        }
        return(arr);
    }
};