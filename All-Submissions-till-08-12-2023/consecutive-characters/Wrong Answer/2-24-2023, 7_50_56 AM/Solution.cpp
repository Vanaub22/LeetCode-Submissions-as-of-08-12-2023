// https://leetcode.com/problems/consecutive-characters

class Solution {
public:
    int maxPower(string s) {
        char check=s[0];
        int max_power=INT_MIN,power=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==check)
            power++;
            else{
            check=s[i];
            max_power=max(max_power,power);
            power=1;
            }
        }
        return(max_power);        
    }
};