// https://leetcode.com/problems/license-key-formatting

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int n=s.length(),dash=0;
        string temp="";
        for(int i=0;i<n;i++){
            s[i]=toupper(s[i]);
            if(s[i]!='-') temp+=s[i];
        }
        int characters=temp.size(),first_group=characters%k,i,cnt=0;
        s="";
        if(first_group>characters) return temp;
        for(i=0;i<first_group;i++) s+=temp[i];
        s+='-';
        while(i<characters){
            s+=temp[i];
            i++;
            cnt++;
            if(cnt==k){
                s+='-';
                cnt=0;
            }
        }
        if(s.front()=='-') s=s.substr(1,s.length()-1);
        if(s.back()=='-') s.pop_back();
        return s;
    }
};