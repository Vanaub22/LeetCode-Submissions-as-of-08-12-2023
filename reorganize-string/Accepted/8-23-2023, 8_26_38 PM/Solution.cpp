// https://leetcode.com/problems/reorganize-string

class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;
        int maxFreq=-1,n=s.size(),i;
        char maxChar='a';
        for(auto it:freq) 
        if(it.second>=maxFreq){
            maxFreq=it.second;
            maxChar=it.first;
        }
        if(maxFreq>(n+1)/2) return "";
        string ans(n,'a');
        for(i=0;i<n;i+=2){
            ans[i]=maxChar;
            maxFreq--;
            if(maxFreq==0) break;
        }
        freq.erase(maxChar);
        for(auto it:freq)
        while(it.second){
            i+=2;
            if(i>n-1) i=1;
            ans[i]=it.first;
            it.second--;
        }
        return ans;
    }
};