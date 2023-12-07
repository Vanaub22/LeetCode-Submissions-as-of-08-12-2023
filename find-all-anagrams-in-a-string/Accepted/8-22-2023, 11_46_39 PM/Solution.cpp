// https://leetcode.com/problems/find-all-anagrams-in-a-string

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m=p.length(),n=s.length();
        if(m>n) return {};
        unordered_map<char,int> p_freq,window_freq;
        vector<int> start_anagrams;
        for(int i=0;i<m;i++){
            window_freq[s[i]]++;
            p_freq[p[i]]++;
        }
        if(window_freq==p_freq) start_anagrams.push_back(0);
        for(int i=m;i<n;i++){
            window_freq[s[i-m]]--;
            if(window_freq[s[i-m]]==0) window_freq.erase(s[i-m]);
            window_freq[s[i]]++;
            if(window_freq==p_freq) start_anagrams.push_back(i-m+1);
        }
        return start_anagrams;
    }
};