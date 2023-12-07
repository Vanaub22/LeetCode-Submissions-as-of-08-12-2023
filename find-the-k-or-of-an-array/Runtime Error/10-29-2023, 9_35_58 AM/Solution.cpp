// https://leetcode.com/problems/find-the-k-or-of-an-array

class Solution {
public:
    bool ithBitSetForK(vector<int> arr, int i, int k) {
        int count=0;
        for(int x:arr) if(x&(1<<i)) count++;
        return count>=k;
    }
    unsigned int countBits(int x) {
        return (int)log2(x)+1;
    }
    int findKOr(vector<int>& nums, int k) {
        int kOr=0,maxBitCount=countBits(*max_element(nums.begin(),nums.end()));
        for(int i=0;i<maxBitCount;i++) if(ithBitSetForK(nums,i,k)) kOr+=pow(2,i);
        return kOr;
    }
};