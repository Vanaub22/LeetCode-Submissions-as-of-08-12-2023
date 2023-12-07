// https://leetcode.com/problems/long-pressed-name

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0,m=name.length(),n=typed.length();
        while(i<m && j<n){
            int freq_ch=0;
            char ch=name[i];
            while(i<m && ch==name[i]){
                i++;
                freq_ch++;
            }
            while(j<n && ch==typed[j]){
                j++;
                freq_ch--;
            }
            if(freq_ch>0) return false;
        }
        return true;
    }
};