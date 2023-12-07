// https://leetcode.com/problems/semi-ordered-permutation

class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n=nums.size(),x=-1,y=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==1)
            x=i;
            if(nums[i]==n)
            y=i;
            if(x!=-1 && y!=-1)
            break;
        }
        return(x>y?x+n-y-2:x+n-y-1);
    }
};