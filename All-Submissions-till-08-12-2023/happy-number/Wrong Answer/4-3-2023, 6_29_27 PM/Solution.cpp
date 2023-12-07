// https://leetcode.com/problems/happy-number

class Solution {
public:
    bool isHappy(int n) {
       //recursive approach
       int sum=0;
       while(n>0){
           sum+=(pow((n%10),2));
           n/=10;
       }
       if(sum==4||sum==16||sum==37||sum==58||sum==89||sum==145||sum==42||sum==20)
       return(false);
       else{
           if(sum<145)
           return(true);
           return(isHappy(sum));
       }
    }
};