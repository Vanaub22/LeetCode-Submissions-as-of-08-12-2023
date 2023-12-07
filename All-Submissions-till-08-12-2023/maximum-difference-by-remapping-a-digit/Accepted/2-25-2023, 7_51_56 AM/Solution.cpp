// https://leetcode.com/problems/maximum-difference-by-remapping-a-digit

class Solution {
public:
    int minMaxDifference(int num) {
    char remap;
    int max_val,min_val;
    string number=to_string(num);
    for(char i:number)
        if(i!='9'){
            remap=i;
            break;
        }
    for(int i=0;i<number.length();i++)
    if(number[i]==remap)
    number[i]='9';
    max_val=stoi(number); 
    number=to_string(num);
    remap=number[0];
    for(int i=0;i<number.length();i++)
    if(number[i]==remap)
    number[i]='0';
    min_val=stoi(number);
    return(max_val-min_val); 
    }
};