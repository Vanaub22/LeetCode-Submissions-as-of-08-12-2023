// https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n

class Solution {
public:
    string getHappyString(int n, int k) {
        // An ordered set of characters ensures that lexicographical order is maintained
        // The charSet iteration in the backtracking fn. eliminates the need for sorting 
        string charSet="abc",s="";
        vector<string> happyStrings;
        backtrack_gen(s,charSet,happyStrings,n,k);
        return happyStrings.size()==k?happyStrings[k-1]:"";
    }
    void backtrack_gen(string& s, string charSet, vector<string>& hs, int n, int& k) {
        if(hs.size()==k) return;
        if(s.length()==n) {
            hs.emplace_back(s);
            return;
        }
        for(int i=0;i<3;i++) {
            if(s.length()==0 || s.back()!=charSet[i]) {
                s+=charSet[i];
                backtrack_gen(s,charSet,hs,n,k);
                s.pop_back();
            }
        }
    }
};