// https://leetcode.com/problems/compare-version-numbers

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,j=0,len1=version1.length(),len2=version2.length();
        while(true){
            int rev1=0,rev2=0;
            while(i<len1 && version1[i]!='.'){
                rev1*=10;
                rev1+=(version1[i]-'0');
                i++;
            }
            while(j<len2 && version2[j]!='.'){
                rev2*=10;
                rev2+=(version2[j]-'0');
                j++;
            }
            if(rev1<rev2)
            return(-1);
            if(rev1>rev2)
            return(1);
            if(i>=len1 && j>=len2)
            break;
            i++;
            j++;
        }
        return(0);
    }
};