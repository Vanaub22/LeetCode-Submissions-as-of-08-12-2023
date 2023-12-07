// https://leetcode.com/problems/string-compression

class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size(),start=0,end=0,compressed_idx=0;
        while(end<n){
            char c=chars[start];
            while(end<n && chars[end]==c) end++;
            chars[compressed_idx++]=c;
            if(end-start>1) for(char c:to_string(end-start)) chars[compressed_idx++]=c;
            start=end;
        }
        return compressed_idx;
    }
};