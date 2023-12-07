// https://leetcode.com/problems/odd-string-difference

class Solution {
public:
    vector<int> diffArray(string s){
        vector<int> diffArray;
        for(int i=0;i<s.length()-1;i++)
        diffArray.push_back((int)(s[i+1]-s[i]));
        return(diffArray);
    }
    string oddString(vector<string>& words) {
     vector<int> dA;
     map<vector<int>,int> mp;
     for(auto word:words){
         dA=diffArray(word);
         mp[dA]++;
         if(mp[dA]>1)
         break;
     }
     for(auto word:words)
     if(diffArray(word)!=dA)
     return(word);
     return("");
    }
};