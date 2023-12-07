// https://leetcode.com/problems/unique-number-of-occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq,freq_of_freq;
        for(int i:arr)
        freq[i]++;
        unordered_map<int,int>::iterator it=freq.begin();
        while(it!=freq.end()){
        freq_of_freq[it->second]++;
        it++;
        }
        it=freq_of_freq.begin();
        while(it!=freq_of_freq.end()){
            if(it->second>1)
            return(false);
            it++;
        }
        return(true);
    }
};