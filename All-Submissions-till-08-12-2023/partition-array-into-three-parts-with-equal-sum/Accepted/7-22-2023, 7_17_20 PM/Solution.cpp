// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum=accumulate(arr.begin(),arr.end(),0);
        if(totalSum%3) return false;
        int partialSum=totalSum/3,sum=0,times=0;
        for(int i:arr){
            sum+=i;
            if(sum==partialSum){
                times++;
                sum=0;
            }
        }
        return times>=3;
    }
};