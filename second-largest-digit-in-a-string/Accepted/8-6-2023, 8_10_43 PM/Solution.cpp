// https://leetcode.com/problems/second-largest-digit-in-a-string

class Solution {
public:
    int secondHighest(string s) {
        int largest=-1,secondLargest=-1;
        for(char c:s)
        if(isdigit(c)){
            int dig=c-'0';
            if(largest==-1) largest=dig;
            else if(dig>largest){
                secondLargest=largest;
                largest=dig;
            }
            else if(dig<largest && dig>secondLargest) secondLargest=dig;
        }
        return secondLargest==largest?-1:secondLargest;
    }
};