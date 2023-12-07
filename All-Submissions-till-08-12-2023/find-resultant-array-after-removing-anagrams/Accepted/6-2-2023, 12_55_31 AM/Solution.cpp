// https://leetcode.com/problems/find-resultant-array-after-removing-anagrams

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        string f="";
        vector<int> remaining;
        vector<string> original(words.begin(),words.end()),remainder;
        for(int i=0;i<n;i++)
        sort(words[i].begin(),words[i].end());
        for(int i=0;i<n;i++)
        if(words[i]!=f){
            f=words[i];
            remaining.push_back(i);
        }
        for(int i:remaining)
        remainder.push_back(original[i]);
        return(remainder);
    }
};