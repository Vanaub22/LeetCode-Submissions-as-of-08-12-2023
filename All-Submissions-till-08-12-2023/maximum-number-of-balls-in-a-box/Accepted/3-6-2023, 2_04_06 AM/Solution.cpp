// https://leetcode.com/problems/maximum-number-of-balls-in-a-box

class Solution {
public:
    int digitSum(int num){
        int sum=0;
        while(num>0){
            sum+=(num%10);
            num/=10;
        }
        return(sum);
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> box;
        int maxBalls=INT_MIN;
        for(int i=lowLimit;i<=highLimit;i++)
        box[digitSum(i)]++;
        for(auto it:box)
        if(it.second>maxBalls)
        maxBalls=it.second;
        return(maxBalls);
    }
};