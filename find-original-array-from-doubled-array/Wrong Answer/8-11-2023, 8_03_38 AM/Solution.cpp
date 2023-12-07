// https://leetcode.com/problems/find-original-array-from-doubled-array

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> original;
        sort(changed.begin(),changed.end());
        set<int> s(changed.begin(),changed.end());
        for(int i:changed) if(s.find(i)!=s.end()){
            if(s.find(2*i)==s.end()) return {};
            else{
                original.push_back(i);
                s.erase(i);
                s.erase(2*i);
            }
        }
        return original;
    }
};