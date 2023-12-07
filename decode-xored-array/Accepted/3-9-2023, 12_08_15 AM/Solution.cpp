// https://leetcode.com/problems/decode-xored-array

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result;
        int element=first;
        result.push_back(first);
        for(int i:encoded){
            element^=i;
            result.push_back(element);
        }
        return(result);
    }
};