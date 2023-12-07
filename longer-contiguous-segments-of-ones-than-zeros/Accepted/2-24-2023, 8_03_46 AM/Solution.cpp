// https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros

class Solution {
public:
    bool checkZeroOnes(string s) {
    int zeroes=0,ones=0,max_ones=INT_MIN,max_zeroes=INT_MIN;
    for(char i:s){
        if(i=='1')
        ones++;
        else{
            max_ones=max(max_ones,ones);
            ones=0;
        }
        if(i=='0')
        zeroes++;
        else{
            max_zeroes=max(max_zeroes,zeroes);
            zeroes=0;
        }
    }
    max_zeroes=max(max_zeroes,zeroes);
    max_ones=max(max_ones,ones);
    return(max_ones>max_zeroes);   
    }
};