// https://leetcode.com/problems/count-nice-pairs-in-an-array

#define MOD (int)((1e9)+7)
class Solution {
public:
    int countNicePairs(vector<int> nums) {
        // Nie Pair Condition: nums[i] + rev(nums[j]) = nums[j] + rev(nums[i])
        // => nums[i] - rev(nums[i]) = nums[j] - rev(nums[j])
        int nicePairs=0;
        for(int& i:nums) i-=reverseNumber(i);
        unordered_map<int,int> freq;
        for(int i:nums) {
            freq[i]++;
            nicePairs=(nicePairs+(freq[i]-1))%MOD;
        }
        return nicePairs%MOD;
    }
    int reverseNumber(int x) {
        int revNum=0;
        while(x>0) {
            revNum=revNum*10+x%10;
            x/=10;
        }
        return revNum;
    }
};