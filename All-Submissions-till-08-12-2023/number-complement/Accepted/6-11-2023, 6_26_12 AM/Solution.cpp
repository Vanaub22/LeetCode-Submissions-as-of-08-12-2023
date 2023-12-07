// https://leetcode.com/problems/number-complement

class Solution {
public:
    int findComplement(int num) {
        int pv=0,complement=0;
        while(num!=0){
            int bit=num&1;
            if(bit==0)
            complement+=(pow(2,pv));
            pv++;
            num>>=1;
        }
        return(complement);
    }
};