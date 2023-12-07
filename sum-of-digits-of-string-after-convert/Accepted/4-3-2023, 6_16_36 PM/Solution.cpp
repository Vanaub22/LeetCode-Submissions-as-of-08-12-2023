// https://leetcode.com/problems/sum-of-digits-of-string-after-convert

class Solution {
public:
    int sumOfDigits(int num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        return(sum);
    }
    int getLucky(string s, int k) {
        int result=0;
        for(char c:s)
        result+=sumOfDigits((int)c-96);
        for(int i=0;i<k-1;i++)
        result=sumOfDigits(result);
        return(result);
    }
};