// https://leetcode.com/problems/compare-version-numbers

class Solution {
public:
    int compareVersion(string version1, string version2) {
        if(version1==version2)
        return(0);
        stringstream v1(version1),v2(version2);
        string t1,t2;
        while(getline(v1,t1,'.') && getline(v2,t2,'.')){
            if(stoi(t1)<stoi(t2))
            return(-1);
            else if(stoi(t1)>stoi(t2))
            return(1);
        }
        while(getline(v1,t1,'.'))
        if(stoi(t1)!=0)
        return(-1);
        while(getline(v2,t2,'.'))
        if(stoi(t2)!=0)
        return(1);
        return(0);
    }
};