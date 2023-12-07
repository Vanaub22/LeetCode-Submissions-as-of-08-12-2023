// https://leetcode.com/problems/integer-replacement

class Solution {
public:
    int integerReplacement(int n) {
        int ops=0;
        while(n!=1){
            if(n%2==0) n/=2;
            else if((n+1)%4==0 && n!=3) n+=1;
            else n-=1;
            ops++;
        }
        return ops;
    }
};