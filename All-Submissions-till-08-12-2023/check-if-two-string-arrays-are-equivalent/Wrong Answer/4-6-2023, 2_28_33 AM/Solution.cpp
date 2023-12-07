// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent

class Solution {
public:
    //optimizing approach by comparing at each step
    bool equalSoFar(string a,string b){
        return(a.size()<b.size()?a==b.substr(0,a.size()):a.substr(0,b.size())==b);
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a="",b="";
        int i=0,j=0;
        while(i<word1.size()&&i<word2.size()){
            a+=word1[i];
            b+=word2[i];
            if(!equalSoFar(a,b))
            return(false);
            i++;
        }
        if(i==word1.size()-1){
            while(i<word2.size()){
                b+=word2[i];
                i++;
                if(!equalSoFar(a,b))
                return(false);
            }
        }
        else{
            while(i<word1.size()){
                a+=word1[i];
                i++;
                if(!equalSoFar(a,b))
                return(false);
            }
        }
        return(a==b);
    }
};