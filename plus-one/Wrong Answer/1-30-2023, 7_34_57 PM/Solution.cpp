// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last=digits.size()-1;
        if(digits[last]!=9)
        digits[last]++;
        else{
            while(digits[last]==9){
                digits[last]=0;
                if(last>0)
                last--;
                else
                break;
            }
            if(last==0)
            digits.insert(digits.begin(),1);
            else
            digits[last]++;
        }
        return(digits);
    }
};