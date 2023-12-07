// https://leetcode.com/problems/smallest-value-of-the-rearranged-number

class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0) return(0);
        bool negative=false;
        if(num<0){
            negative=true;
            num*=(-1);
        }
        string str_num=to_string(num);
        if(negative) sort(str_num.begin(),str_num.end(),greater<char>());
        else{
            int zeroes=0;
            string pos="";
            for(char c:str_num)
            if(c!='0') pos+=c;
            else zeroes++;
            sort(pos.begin(),pos.end());
            str_num=pos[0]+string(zeroes,'0')+pos.substr(1,pos.length()-1);
        }
        return(negative?((-1)*stoll(str_num)):stoll(str_num));
    }
};