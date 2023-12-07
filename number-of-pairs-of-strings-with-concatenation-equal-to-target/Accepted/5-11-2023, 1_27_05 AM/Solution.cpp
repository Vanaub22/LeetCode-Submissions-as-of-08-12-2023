// https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target

class Solution {
public:
    //optimized approach using map
    int numOfPairs(vector<string>& arr, string target) {
        map<string,int> str_freq;
        for(string s:arr)
        str_freq[s]++;
        int n=target.length(),pairs=0;
        for(int i=1;i<n;i++){
            string prefix=target.substr(0,i),suffix=target.substr(i);
            if(str_freq[prefix]!=0 && str_freq[suffix]!=0)
            pairs+=(prefix==suffix)?(str_freq[prefix]*(str_freq[prefix]-1)):(str_freq[prefix]*str_freq[suffix]);
        }
        return(pairs);
    }
};