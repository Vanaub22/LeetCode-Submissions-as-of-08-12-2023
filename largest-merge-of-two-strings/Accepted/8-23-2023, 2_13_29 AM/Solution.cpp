// https://leetcode.com/problems/largest-merge-of-two-strings

class Solution {
public:
    string largestMerge(string a, string b) {
        string merge="";
        int a_len=a.length(),b_len=b.length();
        while(a_len>0 && b_len>0){
            int i=0;
            while(i<a_len && i<b_len && a[i]==b[i]) i++;
            if(a[i]>b[i]){
                merge.push_back(a[0]);
                a=a.substr(1,a_len-1);
            }
            else{
                merge.push_back(b[0]);
                b=b.substr(1,b_len-1);
            }
            a_len=a.length(),b_len=b.length();
        }
        return merge+a+b;        
    }
};