// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
        int rom_num=0;
        map<char,int> rom;
        rom['I']=1;
        rom['V']=5;
        rom['X']=10;
        rom['L']=50;
        rom['C']=100;
        rom['D']=500;
        rom['M']=1000;
        for(char c:s)
        rom_num+=rom[c];
        for(int i=1;i<s.size();i++)
        if(rom[s[i-1]]<rom[s[i]])
        rom_num-=(2*rom[s[i-1]]);
        return(rom_num);
    }
};