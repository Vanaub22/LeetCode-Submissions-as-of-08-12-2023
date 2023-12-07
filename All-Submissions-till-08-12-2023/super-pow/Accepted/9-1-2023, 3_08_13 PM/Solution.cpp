// https://leetcode.com/problems/super-pow

class Solution {
public:
    int normalPow(int a, int b){
        int val=1;
        a%=1337;
        for(int i=1;i<=b;i++){
            val*=a;
            val%=1337;
        }
        return val;
    }
    int superPow(int a, vector<int>& b) {
        if(b.empty()) return 1;
        int rightmost_dig=b.back();
        b.pop_back();
        return normalPow(superPow(a,b),10)*normalPow(a,rightmost_dig)%1337;
    }
};