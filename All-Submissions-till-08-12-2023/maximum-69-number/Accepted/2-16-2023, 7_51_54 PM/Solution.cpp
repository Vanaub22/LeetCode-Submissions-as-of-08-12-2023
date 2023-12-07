// https://leetcode.com/problems/maximum-69-number

class Solution {
public:
    int maximum69Number (int num) {
    string number=to_string(num);
    bool flag=true;
    for(int i=0;i<number.length();i++)
    if(number[i]=='6'){
        flag=false;
        number[i]='9';
        break;
    }
    return((flag)?(num):(stoi(number)));
    }
};