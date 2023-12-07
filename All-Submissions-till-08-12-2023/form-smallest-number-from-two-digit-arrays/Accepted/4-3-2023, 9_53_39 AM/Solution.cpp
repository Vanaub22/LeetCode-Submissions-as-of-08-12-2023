// https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(),nums2.end());
        int min1=*min_element(nums1.begin(),nums1.end()),min2=nums2[0],min_common=INT_MAX,min_2dig=10*min(min1,min2)+max(min1,min2);
        unordered_map<int,int> digits;
        for(int i:nums1)
        digits[i]++;
        for(int i:nums2)
        if(digits[i]!=0){
            min_common=i;
            break;
        }
        return(min_common<min_2dig?min_common:min_2dig);
    }
};